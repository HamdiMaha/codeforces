#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n,k,m,sum = 0,nk = 0,flag=0,i=0; cin >> n >> k;
	vector <int> v;
	for (int j = 0; j < n; j++) {
		cin >> m;
		v.push_back(m);
	}
	
		while (nk < k) {
			if(i >=n){
			flag = 1;
			break;
			}
			else{
				if(v[i]<8){
					nk = nk+v[i];
				}
				else{
					
				sum= v[i]-8;
				v[i+1]= v[i+1]+sum;
				nk= nk+8;
				
				}
				
			}
			i++;
			
		}
		if (flag ==1)
			cout <<"-1"<<endl;
		else
			cout <<i<<endl;
		
	return 0;
}
