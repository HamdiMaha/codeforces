#include <iostream>
using namespace std;

int main(void){
	int n, k;
	
	cin >> n >> k;	
	n++;
	if(n%k == 0)
		cout << "yes" << endl;
	else cout << "no" << endl;

	return 0;
}
