#include <stdio.h>
int main()
{
	int x, y, z;
	z = 0;
	scanf("%d %d", &x, &y);
	z = x%y;
    int m=x;
    int n=y;
	while (z)
	{
		x = y;
		y = z;
		z = x % y;
	}
	printf("%d %d",y,m*n/ y);
}