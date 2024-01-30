#include<stdio.h>
#include<string.h>
int main(){
	char x[1000];
	while(gets(x)){
		if(x[0]=='#'){
			break;
		}
		char y[100][100];
		int n,j,i,ret=0,f=0,pd[100]={0},flag=1,h=0;
		n=strlen(x);
		for(i=0;i<n;i++){
			if(x[i]!=' '){
				y[ret][f]=x[i];
				f++;
			} else if(f!=0){
				y[ret][f]='\0';
				ret++;
				f=0;
				flag=1;
				for(j=0;j<ret-1;j++){
					if(strcmp(y[j],y[ret-1])==0){
						flag=0;
						break;
					}
				}
				if(flag==1){
					pd[ret-1]=1;
				}
			}
		}
		if(x[n-1]!=' '){
			y[ret][f]='\0';
			ret++;
			flag=1;
			for(j=0;j<ret-1;j++){
						if(strcmp(y[j],y[ret-1])==0){
							flag=0;
							break;
						}
					}
			if(flag==1){
				pd[ret-1]=1;
			}
		}
		for(j=0;j<ret;j++){
			if(pd[j]==1){
				h++;
				pd[j]=0;
			}
		}
		printf("%d\n",h);
  	}
}