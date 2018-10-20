#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin>>n1>>n2;
	int number;
	int div1, div2;
	number=n1+n2;
	if(number>=1){
		if(number%2 !=0){
			div1=number/2 +1; 
			div2=number-div1;
		}
		else
			div1=div2=number/2;
		if((n1==div1 && n2==div2) || (n1==div2 && n2==div1))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	else
		cout<<"no"<<endl;
	return 0;
}
