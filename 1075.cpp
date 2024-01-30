#include<stdio.h>
#include<math.h>
int main()
{
	double m;
	while(scanf("%lf",&m)!=EOF)
	{
	    m=fabs(m);
	    printf("%.2lf\n",m);	
	}
	return 0;
}