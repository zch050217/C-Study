#include<stdio.h>
int main(){
	int N,i,ret,j;
	scanf("%d",&N);
	for(i=2;i<=N;i++){
		ret=1;
		if (i>100){
			for(j=2;j<=(i/4);j++){
			if(i%j==0){
				ret=0;
			}
		}
		} else {
		for(j=2;j<=(i/2);j++){
			if(i%j==0){
				ret=0;
			}
		}
	  }
	  if(ret==1){
	  	printf("%d\n",i);
	  }
    }
}