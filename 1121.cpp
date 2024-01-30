#include<stdio.h>
int main(){
	long long n,T;
	scanf("%lld",&T);
	while(T>0){
		scanf("%lld",&n);
		printf("%lld\n",2*n*n-n+1);
		T--;
	}
} 