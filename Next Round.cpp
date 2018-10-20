#include <iostream>
#include<vector>
using namespace std;

int main() {
	int n,k,m;
	int count=0;
	vector <int> v;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>m;
		v.push_back(m);
	}
	
	if(v[k-1]!=0){
		count=k;
		for(int i=k;i<n;i++){
			if(v[i]==v[k-1])
				count++;
			else
				break;
		}
	}
   else{
   		for(int i=0;i<n;i++){
   			if(v[i]==0)
   				break;
   			else
   				count++;
   		}	
   }
	cout<<count;
	return 0;
}
