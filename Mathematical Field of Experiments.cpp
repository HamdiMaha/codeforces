#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
	map<long long int, long long int> m;
	long long int p,r;
cin>>p;
for(long long int i=0;i<=p-1;i++){
	r=(i*i)%p;
	m[r]=i;
	
}
for(int i=0;i<=p-1;i++){
	if(m.count(i))
		cout<<m[i];
	else
		cout<<-1;
	cout<<" ";
}
cout<<endl;

	
	return 0;
}
