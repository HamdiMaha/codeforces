#include <iostream>
#include<vector>
using namespace std;

int main() {
	string s;
	vector <int> v;
	int n;
	int open=0,close=0;
	cin>>s;
	n=s.size();

	
	for(int i=0;i<n;i++){
		if(s[i]=='(')
			open++;
		else if (s[i]==')')
			open=max(0,open-1);
		v.push_back(open);
	
	}
	
	for(int i=n-1;i>=0;i--){
		if(s[i]==')')
			close++;
		else if (s[i]=='(')
			close--;
		else if(s[i]=='?'){
				if(v[i]>=close){
					s[i]=')';
					close++;
				}
				else{
					s[i]='(';
					close--;
				}
		}
		
		if(close<0){
			cout<<"Impossible";
			return 0;
		}
			
	}

		if(close==0)
			cout<<s;
		else
			cout<<"Impossible";
	return 0;
}
