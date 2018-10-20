#include <iostream>
#include <queue>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <set>

using namespace std; 
 
int main(void) {
	int n, k; cin >> n >> k;
	vector <int> v1, v2;
	vector <pair <int, int> > v3;
	for (int i = 0; i < n; i++) {
		int m; cin >> m;
		v1.push_back(m);
	} 
	sort (v1.begin(), v1.end());
	for (int i = 0; i < k; i++) {
		int m; cin >> m;
		v2.push_back(m);
	}
	int count = 1, sum = 0;
	//v3.push_back(make_pair(last,0)); 
	for (int i = 1; i < n; i++) { 
		if (v1[i] == v1[i-1])
			count++;
		else {
			sum += count;
			count = 1;
			v3.push_back(make_pair(v1[i-1],sum));			
		}	
	}
	sum += count;
	v3.push_back(make_pair(v1.back(),sum));
	// for (int i = 0; i < v3.size(); i++) {
// 		cout << v3[i].first <<" "<<v3[i].second<<endl;
// 	}
	for (int i = 0; i < v2.size(); i++) {
		int mid = 0, low = 0, hi = int(v3.size())-1, count = 0;
		while (low <= hi) {
			mid = (hi+low)/2;
			if (v3[mid].first <= v2[i]) {
				low = mid + 1;
				count = v3[mid].second;
			}
			else
				hi = mid - 1;
		}
		cout << count << " ";
	}
	return 0;
}
