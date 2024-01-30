#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int x,y,i,k,s;
	int ss(int s);
	while (1)
	{ scanf("%d%d",&x,&y);
		if (x==0&&y==0)break;
		k=0;
		for (i=x;i<=y;i++)
		{
			s=i*i+i+41;
			if (ss(s)==2)k++;
		}
		if (k==y-x+1)printf("OK\n");
			else printf("Sorry\n");
	}
    return 0;
}
int ss(int s)
{
	int k,i;
	k=0;
	for (i=1;i<=s;i++)
	   if (s%i==0)k++;
	return(k);
}