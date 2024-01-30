#include<stdio.h>
int main(){
	int t,i,a[200000]={0};
	scanf("%d",&t);
	for(i=0;i<200000;i++){
		a[i]=i+1;
	}
	for(t;t>0;t--){
		long long ret=0,n,k,x,j,min=0;
		scanf("%lld %lld %lld",&n,&k,&x);
		j=n;
		for(n=n-1;n>=j-k;n--){
			ret=ret+a[n];
		}
		for(n=0;n<k;n++){
			min=min+a[n];
		}
		if(ret>=x&&min<=x){
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
}