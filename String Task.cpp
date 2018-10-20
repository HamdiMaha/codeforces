#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	string s; cin>>s;
	for(int i = 0 ;i< s.length(); i++){
		s[i]=tolower(s[i]);
		if(s[i] != 'a'&& s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] !='u' && s[i] != 'i'){
			 cout<<'.'<<s[i];
		
		}
	}
	
	return 0;
}
