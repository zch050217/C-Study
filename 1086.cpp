#include<stdio.h>
int main()
{
	int a[100],max,min,i,sum,n;
	float x;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;x=0;
	    for(i=0;i<n;i++)
	    	scanf("%d",&a[i]);
	    	
    	min=a[0];max=a[0];
	    
	    for(i=1;i<n;i++)
	    {
    		if(a[i]>max) max=a[i];
		    if(a[i]<min) min=a[i];
    	}
    	for(i=0;i<n;i++)
			sum=sum+a[i];
    	x=(sum-max-min)*1.0/(n-2);
    	printf("%.2f\n",x);
	}
	return 0;}