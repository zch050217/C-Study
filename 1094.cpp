#include <stdio.h>
#include <math.h>
int main()
{
	int hx(int a[100][100],int m,int n);
	int a[100][100],m,n,i,j;
	while (scanf("%d %d",&m,&n)!=EOF)
	{
		for (i=0;i<m;i++)
		{
			for (j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		hx(a,m,n);
	}
	return 0;
}
int hx(int a[100][100],int m,int n)
{
	int h,l,i,j,max;
	h=0;
	l=0;
	max=fabs(a[0][0]);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (fabs(a[i][j])>max)
			{
				max=fabs(a[i][j]);
				h=i;
				l=j;
			}
		}
	}
	printf("%d %d %d",h+1,l+1,a[h][l]);
	printf("\n");
	return 0;
}