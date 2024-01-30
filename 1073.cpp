#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x;
	while (scanf("%f%f%f%f",&a,&b,&c,&d)!=EOF)
	{
		x=0;
		x=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		printf("%.2f\n",x);
	}
	return 0;
}