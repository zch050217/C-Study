#include<stdio.h>
#include<math.h>
int main ()
{
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		
		if (x>100 || x<0)printf("Score is error!\n");
		else
		switch(x/10)
		{
			case 10:printf("A\n");break;
			case 9:printf("A\n");break;
			case 8:printf("B\n");break;
			case 7:printf("C\n");break;
			case 6:printf("D\n");break;
			default:printf("E\n");
		}
	}	
	return 0;
}