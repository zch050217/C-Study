#include<stdio.h>
int main(){
	char x[71][71];
	int m,n,i,j;
	while(scanf("%d %d",&m,&n)!=EOF){
	for(j=1;j<=n+2;j++){
		for(i=1;i<=m+2;i++){
			if(i==1&&j==1||i==1&&j==n+2||i==m+2&&j==1||i==m+2&&j==n+2){
				printf("+");
			} else if(i==1&&j!=1||i==m+2&&j!=n+2||i==1&&j!=n+2||i==m+2&&j!=1){
				printf("|");
			} else if(j==1&&i!=1||j==1&&i!=m+1||j==n+2&&i!=1||j==n+2&&i!=m+2){
				printf("-");
			} else {
				printf(" ");
			}
		}
			printf("\n");
	} 
   }
}