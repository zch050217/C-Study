#include <stdio.h>
#include <string.h>
int ishw(char s[],int size){
	int p=1,i;
	for( i=0;i<size/2;i++){
		if(s[i]!=s[size-1-i]){
			p=0;
			return p;
		}
	}
	return p;
}
int main(){
	int n,cnt=0;
	scanf("%d",&n);
	char a[55],b[55],c[110];
	while(n--){
		cnt=0;
		int i,j;
		scanf("%s%s",a,b);
		int la,lb;
		la=strlen(a);
		lb=strlen(b);
		for(i=0;i<=la;i++){
			memset(c,0,sizeof(c));
			for(j=0;j<i;j++){
				c[j]=a[j];
			}
			strcat(c,b);
			for(;j<la;j++){
				c[j+lb]=a[j];
			}
			if(ishw(c,strlen(c))){cnt++;}
		}
		printf("%d\n",cnt);
	}	
	return 0;
}