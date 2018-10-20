#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	int flag = 0;
	string s;cin >> s;
	for (int i = 1; i < s.size(); i++) {
		if (isupper(s[i]))
			continue;
		else {
			flag = 1;
			break;
		}
	}
	if (flag == 0){
		if (isupper(s[0]))
			s[0] = tolower(s[0]);
		else
			s[0] = toupper(s[0]);
		for (int i = 1; i < s.size(); i++) {
			s[i] = tolower (s[i]);
		}
	}
	cout << s <<endl;	
	return 0;
}
