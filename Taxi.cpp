#include <iostream>
#include <string>
using namespace std;
 
int main(void) {
    int N; cin>>N;
    
    int array[5];
    fill(array, array+5, 0);

  	for (int i = 0; i < N; i++) {
  		int m;
  		cin>>m;
  		array[m]++;
  	}
  	
  	int count = 0;
  	for (int i = 1; i <= 4; i++) {
  		while (array[i] > 0) {
  			array[i]--;
  			count++;
	  		int w = 4 - i;
	  		for (int j = 4 ; j > 0 ; j--) {
		  		if (w >= j) {
		  			int k = w / j;
		  			int x = min(k, array[j]);
		  			w = w - (x * j);
		  			array[j] = array[j] - x;
		  		}
	  		}
  		}
  	}
  	
  	cout<<count;
  	
    return 0;
}
