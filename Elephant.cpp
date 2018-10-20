#include<stdio.h>
int main (void){
	long long int n,div;
	scanf("%lld",&n);
	if(n%5==0){
		div=n/5;
		if(div<=5)
			div=1;
			
	}
	
	else
		div=(n/5)+1;
 
	
	printf("%lld",div);
return 0;	
}
