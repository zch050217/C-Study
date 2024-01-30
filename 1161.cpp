#include<stdio.h>
int main()
{
	double a, b, sum=0;
	while(scanf("%*s%lf%lf", &a,&b)!= EOF)
	{
		sum+=a*b;
	}
	printf("%.1lf\n",sum);
	return 0;
}
