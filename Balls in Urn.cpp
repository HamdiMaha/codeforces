#include<stdio.h>
int main (){
	long long int n,i,max,m;
	scanf("%lld",&n);
	max=0;
	for(i=0;i<n;i++){
		scanf("%lld",&m);
		if(m>max)
			max=m;
	}
	printf("%lld",max);
return 0;
}
