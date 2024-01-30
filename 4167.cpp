#include<stdio.h>
int main(){
	char s[8];
	int N;
	scanf("%d",&N);
	scanf("%s",s);
	if(s[N-1]=='o'){
		printf("Yes");
	} else {
		printf("No");
	}
}