#include<stdio.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int a[1000]={0},ret=0;
		while(n>0){
			a[ret]=n%2;
			n=n/2;
			ret++;
		}
		for(ret=ret-1;ret>=0;ret--){
			printf("%d",a[ret]);
		}
		printf("\n");
	}
}