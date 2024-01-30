#include<stdio.h>
#include<string.h>
int main(){
	char x[2000],y[1000];
	while(scanf("%s %s",x,y)){
		if(x[0]=='#'){
			break;
		}
		int n1,n2,i,j,ret=0,flag;
		n1=strlen(x);
		n2=strlen(y);
		for(i=0;i<=n1-n2;i++){
			if(x[i]==y[0]){
				flag=1;
				for(j=1;j<n2;j++){
					if(x[i+j]!=y[j]){
						flag=0;
						break;
					}
				}
				if(flag==1){
					ret++;
					i=i+n2-1;
				}
			}
		}
		printf("%d\n",ret);
	}
}