#include<stdio.h>
#include<math.h>
int main()
{
float f[100];
int n,a,b,c,i;
while(scanf("%d",&n),n!=0)
{   a=b=c=0;
	for(i=1;i<=n;i++)
	{   scanf("%f",&f[i]);
		if(f[i]<0)a++;
		else if(f[i]==0)b++;
		else if(f[i]>0)c++;
	}printf("%d %d %d\n",a,b,c);
	}
	return 0;
}