#include<stdio.h>
#include<math.h>
int main()
{
	float n,m;
	while(scanf("%f%f",&n,&m)!=EOF)
	{
	float i;
	i=n;
	for(;m>1;m--)
	{
		n=sqrt(n);
		i=i+n;
	}
	printf("%.2f\n",i);
	}
	return 0;
}