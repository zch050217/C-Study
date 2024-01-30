#include<stdio.h>
int main(){
	int a,b,c,max;
	max = -1000;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(c>a){
			max = c;
		}
		else{
			max = a;
		}
	}
	else{
		if(c>b){
			max = c;
		}
		else{
			max = b;
		}
	}
	printf("%d",max);
	return 0;
}
