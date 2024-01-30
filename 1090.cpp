#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a[100];
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		a[0]=1; a[1]=2; a[2]=3;
		for(i=3;i<n;i++)
		{
			a[i]=a[i-1]+a[i-3];
		}
		printf("%d\n",a[n-1]);
	}
	return 0;
}