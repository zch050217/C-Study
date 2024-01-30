#include<stdio.h>
int main()
{
    int m,n,i,x;
    while(scanf("%d",&n)!=EOF)
    {
	for(i=1,m=1;i<n;i++)
	{m=(m+1)*2;}
	printf("%d\n",m);
    }
	return 0;
}