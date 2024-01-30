#include<stdio.h>
int main(){
	int a[70]={},N,t,f,b[10]={};
	scanf("%d\n",&N);
	for(t=0;t<N*7;t++){
		scanf("%d ",&a[t]);
	}
	for(f=1;f<=N;f++){
		for(t=(f-1)*7;t<f*7;t++){
			b[f-1]=b[f-1]+a[t];
		}
	}
	for(f=0;f<N;f++){
		printf("%d ",b[f]);
	}
	return 0;
}