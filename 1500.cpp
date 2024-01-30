#include<stdio.h>
#include<string.h>
int main(){
	int n,a[1000]={0},i,h=0,ret=0;
	char b[1001];
	scanf("%s",b);
	n=strlen(b);
	for(i=0;i<n;i++){
		if(b[i]=='P'){
			ret++;
			a[h]=ret;
			h++;
		} else if(b[i]=='Q'&&h!=0){
			printf("%d ",a[h-1]);
			a[h-1]=0;
			h--;
		} else if(b[i]=='Q'&&h==0){
			printf("error");
			break;
		}
	  }
	}