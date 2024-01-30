#include<stdio.h>
int main()
{
    int n,m,t; 
	while(scanf("%d%d",&n,&m)!=EOF)
	{ int sum=0,i;
	   
	  for(i=1;i<=n;i++)
	   {  sum=sum+2*i; 
	   if(i%m==0)
	   {
	   	printf("%d ",sum/m);sum=0;
	   }
	   if(i==n&&n%m!=0)
	   printf("%d ",sum/(n%m));
	   
   	}
   	printf("\n"); 
	}
	return 0;
}