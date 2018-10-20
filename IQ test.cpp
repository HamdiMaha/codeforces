#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int> v;
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		v.push_back(m);
	}
	int count_even=0, count_odd=0,even,odd;
	for(int i=0;i<n;i++){
		if(v[i]%2==0){
			even=i+1;
			count_even++;
		}
		else{
			odd=i+1;
			count_odd++;
		}	
	}
	if(count_odd==1)
		cout<<odd;
	else
		cout<<even;
	
	
	return 0;
}
