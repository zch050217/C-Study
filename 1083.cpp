#include<stdio.h>
int main() 
{ 
int a[10000];  
int i,m,j,n, flag;  
double sum=0;  
scanf("%d",&m);  
for(i=1;i<=m;i++) 
{
	sum=0;flag=1;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		sum=sum+flag*1.0/j;
		flag=-flag;
	} 
	printf("%.2f\n",sum);
	
} 
return 0;
}