#include<stdio.h>
#include<string.h>
int main()
{
	char sh[100] ;
	int n,i,j,num;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(sh);
		for(j=0,num=0;j<strlen(sh);j++)
		{
			if(sh[j]>='0'&&sh[j]<='9')
			num++;
		}
		printf("%d\n",num); 
	}
return 0;
}