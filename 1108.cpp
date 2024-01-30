#include<stdio.h>
int main()
{
	int n,i,a[100],b[100];
	double sum;
scanf("%d",&n);
	while(n!=0)
	{
		sum=0;
		for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);
		for(i=0;i<n-1;i++)
		{sum+=a[i]*b[i+1]-a[i+1]*b[i];}

		sum=(sum+a[n-1]*b[0]-b[n-1]*a[0]*1.0)/2; 
		printf("%.1lf\n",sum);
	   scanf("%d",&n);
	}
	return 0;
}