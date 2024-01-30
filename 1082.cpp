#include <stdio.h>
#include <math.h>
int main ( )
{	int i=0,a,b,m,q,z,n,t;	
while(scanf("%d %d",&a,&b)!=EOF)
{
	for(m=a,i=0;m<=b;m++)
{	q=m%10;	z=(m/10)%10;	
n=m/100;    //	t=pow(q,3)+pow(z,3)+pow(n,3);
t=q*q*q+z*z*z+n*n*n;	
if(t==m)
	{	printf("%d ",m);	i++;		}
}
if(i==0)
printf("no");
printf("\n");	}
}