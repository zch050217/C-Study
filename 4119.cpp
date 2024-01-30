#include<stdio.h>
int main(){
	int a[64]={};
	int n;
	int f;
	unsigned long long ret=0,h=1;
	for(n=0;n<64;n++){
		scanf("%d ",&a[n]);
	}
	for(n=0;n<64;n++){
		if (a[n]==1){
			for(f=1;f<=(n);f++){
				h=h*2;
			}
			ret=ret+h;
			h=1;
		}
		}
	printf("%llu",ret);
	return 0;
}