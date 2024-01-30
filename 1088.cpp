#include<stdio.h>
int main()
{
    int n ,i,a[100],min,k,t;
 
	while (scanf("%d",&n),n!=0)
	{  for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
	   min=a[0];k=0;
	   for(i=0;i<n;i++)
	   if(a[i]<min)
	   { min=a[i];
	     k=i;
	   }
	   t=a[0];
	   a[0]=a[k];
	   a[k]=t;
	   for(i=0;i<n;i++)
	   printf("%d ",a[i]);
	   printf("\n");
   	} 
	return 0;
}