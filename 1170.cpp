#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		int i,t;
		if(a==0&&b==0){
			break;
		}
		a=a*100;
		for(i=0;i<100;i++){
			t=a+i;
			if(t%b==0){
				printf("%d%d ",t/10%10,t%10);
			}
		}
		printf("\n");
	}
}