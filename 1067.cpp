#include<stdio.h>
int ans[20];
int main()
{
	int k,i,m,n,s,p;
	while (scanf("%d",&k)!=EOF)
	{
		if(ans[k]!=0)
		{printf("%d\n",ans[k]);
		continue;
		}
		m=k;
		p=0;
		while (p==0)
		{
			p=1;n=2*k;i=0;s=0;m++;
			while (s<k)
			{
				i=(i+m-1)%(n);
				if (i<k){p=0;break;}
				else {n--;s++;}
			}
		}
		ans[k]=m;
		printf("%d\n",m);
	}
	return 0;}