#include<stdio.h>
int main(){
	int n,i,q,t,j;
	while(scanf("%d",&n)!=EOF){
		int a[9000]={0};
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&q);
		for(q;q>0;q--){
			scanf("%d",&t);
			if(t<=n){
				printf("%d\n",a[t-1]);
				for(j=t-1;j+1<=n-1;j++){
					a[j]=a[j+1];
				}
				n--;
			} else {
				printf("-1\n");
			}
		}
	}
}