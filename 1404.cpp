#include<stdio.h>
#include<string.h>
int main(){
	int T,n;
	char xc[5]={'F','I','F','O'},hc[5]={'F','I','L','O'},jin[3]={'I','N'},chu[4]={'O','U','T'}; 
	scanf("%d",&T);
	while(T>0){
		int i=0,a[100]={0},j=0,f=0;
		char x[5],y[4];
		scanf("%d %s",&n,x);
		if(strcmp(x,xc)==0){
			for(i=0;i<n;i++){
				scanf("%s",y);
				if(strcmp(y,jin)==0){
					scanf("%d\n",&a[j]);
					j++;
				} else if(f!=j){
					printf("%d\n",a[f]);
					f++;
				} else if(f==j){
					printf("None\n");
				}
			}
		} else {
			j=-1;
			for(i=0;i<n;i++){
				scanf("%s",y);
				if(strcmp(y,jin)==0){
					j++;
					scanf("%d\n",&a[j]);
				} else if(j>=0) {
					printf("%d\n",a[j]);
					j--;
				} else if(j<0){
					printf("None\n");
				}
			}
		}
		T--;
	}
} 