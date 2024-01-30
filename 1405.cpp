#include<stdio.h>
#include<string.h>
int main(){
	int N,k=0;
	while(scanf("%d",&N)!=EOF){
		int A,B,i=0,j=0,t,h,f,a[11][1001]={0},b[11][1001]={0};
		char jin[3]={'I','N'},y[4];
		for(f=0;f<N;f++){
			scanf("%s",y);
		if(strcmp(y,jin)==0){
			scanf("%d %d",&A,&B);
			k++;
			for(i=0;i<1001;i++){
				if(a[A][i]==0){
					a[A][i]=B;
					b[A][i]=k;
					break;
				}
			}
		} else {
			scanf("%d",&A);
			for(j=999;j>=0;j--){
				if(a[A][j]<a[A][j+1]){
					t=a[A][j+1];
					a[A][j+1]=a[A][j];
					a[A][j]=t;
					h=b[A][j+1];
					b[A][j+1]=b[A][j];
					b[A][j]=h;
				}
			}
			if(a[A][0]!=0){
				printf("%d\n",b[A][0]);
				b[A][0]=0;
				a[A][0]=0;
				for(j=0;j<1000;j++){
					a[A][j]=a[A][j+1];
					b[A][j]=b[A][j+1];
				}
			} else {
				printf("EMPTY\n");
			}
		  }
		}
		k=0;
		continue;
	}
}