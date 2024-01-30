#include<stdio.h>
int main()
{
	int kase,a,b,x1,x2;
	double s;
	scanf("%d",&kase);
	while(kase--)
	{   scanf("%d %d %d %d",&a,&b,&x1,&x2);
		s=a*x2*x2*x2*1.0/3+b*x2-a*x1*x1*x1*1.0/3-b*x1;
		printf("%.3lf\n",s);
	}
	return 0;
}