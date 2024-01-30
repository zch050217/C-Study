#include<stdio.h>
#include<math.h>
int main()
{
	int i,s1,s2,s3,s4,s5,s6,j,a[100],n;
	while(scanf("%d",&n)&&n!=0)
	{
	j=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	s1=a[i]/100;
	j=j+s1;
	s2=(a[i]%100)/50;
	j=j+s2;
	s3=((a[i]%100)%50)/10;
	j=j+s3;
	s4=(((a[i]%100)%50)%10)/5;
	j=j+s4;
	s5=((((a[i]%100)%50)%10)%5)/2;
	j=j+s5;
	s6=((((a[i]%100)%50)%10)%5)%2;
	j=j+s6;
	}
	printf("%d\n",j);
	}
	return 0;
}