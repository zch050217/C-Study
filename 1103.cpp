#include<stdio.h>
#include<math.h> 
int main()
{
	int n,N,r,i,k,a[100];
	while(scanf("%d %d",&N,&r)!=EOF)
	{
		k=0;
		n=fabs(N);
		for(;n>0;)
		{
			a[k]=n%r;
			k++;
			n=n/r;
		}
		if(N<0) {printf("-");}
		for(i=k-1;i>=0;i--)
		{
			if(a[i]==10) printf("A");
			if(a[i]==11) printf("B");
			if(a[i]==12) printf("C");
			if(a[i]==13) printf("D");
			if(a[i]==14) printf("E");
			if(a[i]==15) printf("F");
			if(a[i]<10) printf("%d",a[i]);
		}
		printf("\n");
	}
	return 0;
}