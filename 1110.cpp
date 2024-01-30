#include<stdio.h>
int main()
{
	int n,i;
	double a,b,c,t;
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lf %lf %lf",&a,&b,&c);
			if((a+b>c)&&(c+a>b)&&(b+c>a))printf("YES\n");
			else printf("NO\n");
		}
	return 0;
}