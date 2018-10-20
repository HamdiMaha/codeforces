#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin>>s;
	int  count=1, flag=0; 
	char same;
	same=s[0];
	
	
	for( int i = 1; i <= s.size(); i++){
		if(count == 7) {
			flag=1;
			break;
		}
		else{
			if(s[i] == same){
				count++;
			
			}
			else{
				count=1;
				same=s[i];
				
			}
			//cout<<count<<endl;
		}
	}
	if(flag == 1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
