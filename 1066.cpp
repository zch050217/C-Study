#include<stdio.h>
int main()
{
	int c;
	scanf("%d", &c);
	for (int i=1;i<=c;i++)
	{
		int n;
		scanf("%d", &n);
		int m=n;
		int ans=1,k=2;
		while(n>0)
		{
			if (n%2==1) ans=ans*k%9973;
			n/=2;
			k=k*k%9973;
		}
		printf("%d\n", (ans+(m-1)%9973)%9973);
	}
	return 0;
}