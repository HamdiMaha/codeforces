#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	string s; cin>>s;
	vector <char> v;
	for( int i = 0 ; i<s.size(); i++){
		if(s[i] != '+' )
		//	cout<<s[i]<<endl;
			v.push_back(s[i]);
			
		//	cout<<"v:"<<v[i]<<endl;
	}
	sort(v.begin(),v.end());
	cout<<v[0];
	for( int i = 1; i<v.size(); i++){
		cout<<"+"<<v[i];
		
	}	
	return 0;
}
