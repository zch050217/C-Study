#include<stdio.h>
int main(){
	int i,j,t,n,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		int a[100]={0},b[101]={0},ret=0,maxi,max=-1,h;
		scanf("%d %d\n",&n,&k);
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++){
			b[a[j]]++;
		}
		for(j=0;j<n;j++){
			if(b[a[j]]>=max){
				max=b[a[j]];
				maxi=a[j];
			}
		}
		for(j=0;j<n;j++){
			for(h=0;h<n;h++){
				if(b[a[j]]==1&&b[a[h]]>=b[k]&&b[k]!=0){
					ret=1;
				}
			}
		}
		if(ret==1){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}