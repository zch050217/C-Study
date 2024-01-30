#include<stdio.h>
int main(){
	int n,i,y[1001]={0},j,g;
	double x[1001]={0},ret=0,f;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&x[i]);
		y[i]=i+1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(x[j]>x[j+1]){
				f=x[j];
				x[j]=x[j+1];
				x[j+1]=f;
				g=y[j];
				y[j]=y[j+1];
				y[j+1]=g;
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=0;j<i-1;j++){
			ret+=x[j];
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",y[i]);
	}
	printf("\n");
	printf("%lf",ret/n);
}