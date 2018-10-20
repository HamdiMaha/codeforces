#include <iostream> 
#include <vector> 
using namespace std; 

int main(void) {
	int T; cin >> T;
	while (T--) {
		long long n, m; cin >> n >> m;
		vector <long long> numbers; 
		while (n--) {
			long long x; cin >> x; 
			numbers.push_back(x);
		}
		int THEindex;
		for (int i=0; i<(int)numbers.size(); i++) {
			if (numbers[i] != -1) {
				THEindex = i;
				break;
			}
		}
		for(int i=THEindex; i>0; i--) {
			numbers[i-1] = (numbers[i]-1+m)%m;
		}
		for(int i=THEindex; i<(int)numbers.size()-1; i++) {
			if(numbers[i+1]==-1) {
				numbers[i+1]=(numbers[i]+1)%m;
			}
		}
		for(auto r: numbers)
		    cout << r << " ";
		cout << endl;
	}
	return 0;
}
