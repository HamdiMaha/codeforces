#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <set>
#include <map>
using namespace std; 
bool comp(pair<int, int> v1, pair<int, int> v2){
	 return (v1.second < v2.second);
 }
int main () {
	int n; cin >> n;
	vector <pair <int, int> > v; 
	for (int i = 0; i < n; i++){
		int m; cin >> m;
		v.push_back(make_pair(m,i));
	}
	sort (v.begin(), v.end());
	for (int i = 1; i < (int)v.size(); i++){
		if (v[i].first <= v[i-1].first)
			v[i].first = v[i-1].first + 1;
	}
	sort (v.begin(), v.end(),comp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first <<" ";
	return 0;
}
