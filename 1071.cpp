#include<stdio.h>
int main()
{
	int k,n;double i;
	i=0;
	scanf("%d",&k);
	for(n=1;;n++)
	{
		i=i+1.0/n;
		if(i>k)
		break;
	} 
	printf("%d",n);
	return 0;
}