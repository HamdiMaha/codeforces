#include <iostream>
#include<string>
using namespace std;

int main() {
	string s; cin>>s;
	int index = 0 ;
	string t = "hello";
	for (int i = 0;i<s.size(); i++) {
		if (t[index] == s[i])
			index++;
		if (index > 4)
			break;
	}
	if (index > 4)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
