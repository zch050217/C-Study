#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j,t,x,a[100],b[100],z;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		else{
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		
			for(i=0;i<n;i++)
			{
					m=0;
				for(j=i;j<n;j++)
				{
					z=fabs(a[j]);
					if(z>=m) {m=z;x=j;}
				}
				t=a[x];a[x]=a[i];a[i]=t;
			}
			for(i=0;i<n;i++)
			printf("%d ",a[i]);
			printf("\n");
		}
	}
	return 0;
}