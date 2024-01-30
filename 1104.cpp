#include<stdio.h>
int main()
{
	int n,i,j,a[100][100];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		a[i][i]=a[i][0]=1;
		for(i=2;i<n;i++)
		for(j=1;j<i;j++)
		a[i][j]=a[i-1][j]+a[i-1][j-1];
		for(i=0;i<n;i++)
		{ 
		for(j=0;j<=i;j++)
		printf("%d ",a[i][j]);
		printf("\n");
		}
	}
	return 0;
}