#include <stdio.h>
int main()
{
	int n,m,a[1000],i,j;
	
	while(scanf("%d %d",&n,&m),n!=0||m!=0)
{
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(m<=a[i])
		break;
	}
	for(j=n-1;j>=i;j--)
	{
		a[j+1]=a[j];
		
	}
	a[i]=m;
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");	}
return 0;
}