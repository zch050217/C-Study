#include<stdio.h>
int main(){
	int x[26]={0},i;
	char y[27];
	for(i=0;i<26;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<26;i++){
		y[i]='a'+x[i]-1;
	}
	for(i=0;i<26;i++){
		printf("%c",y[i]);
	}
}