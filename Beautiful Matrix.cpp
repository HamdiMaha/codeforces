#include <iostream>
#include<string>
#include <cmath>
using namespace std;

int main() {
	bool arr[5][5];
	bool m;
	int column, row, sum=0;
	for (int i = 0 ; i < 5 ; i++) {
		for (int j = 0 ; j < 5 ; j++ ){
			cin>>m;
			//cout<<m<<endl;
			arr[i][j] = m;
			if (m == 1) {
				row = i;
				column = j;
		//	cout<<"row:"<<row<<" "<<"column:"<<column<<endl;
			}
		}
	}
	sum = (abs(row-2)+abs(column-2));
	cout << sum;
	return 0;
}
