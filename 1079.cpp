#include<stdio.h>
int main()
{
	int m,n,temp,i,x,y;
	while(scanf("%d %d",&m,&n)!=EOF)
	{   x=y=0;
		if(m>n)
		{ temp=m;m=n;n=temp;}
		for(i=m;i<=n;i++)
		{   if(i%2==0) x=x+i*i;
			else y=y+i*i*i;
		}
		printf("%d %d\n",x,y);
	}
	return 0;
}