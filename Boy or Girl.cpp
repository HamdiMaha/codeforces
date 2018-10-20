#include <iostream>
#include<string>
#include<set>
using namespace std;

int main() {
	set <int> s;
	string p; cin>>p;
	for (int i = 0 ;i < p.size() ;i++){
		s.insert(p[i]);
	}
	if (s.size() % 2 == 0)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	return 0;
}
