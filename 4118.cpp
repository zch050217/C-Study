#include<stdio.h>
int main(){
	char a[50]={};
	int N,f;
	scanf("%d",&N);
	for(f=0;f<N;f++){
		scanf("%s",a);
	}
	for(f=0;f<N;f++){
		printf("%c",a[f]);
		printf("%c",a[f]);
	}
	return 0;
}