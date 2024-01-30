#include<stdio.h>
#include<string.h>
int main(){
	char x[40][80],f;
	int n,t,i,j,h;
	while(scanf("%c %d",&f,&n)!=EOF){
		if (f=='@'){
			break;
		}
		t=n-1;
		for(i=1;i<=t;i++){
			if(i==1){
				for(j=1;j<=t;j++){
					printf(" ");
				}
				printf("%c",f);
				printf("\n");
			} else {
				for(j=1;j<=n-i;j++){
					printf(" ");
				}
				printf("%c",f);
				for(j=1;j<=2*i-3;j++){
					printf(" ");
				}
				printf("%c",f);
				printf("\n");
			}
		}
		for(i=0;i<2*n-1;i++){
			printf("%c",f);
		}
	}
} 