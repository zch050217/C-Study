#include<stdio.h>
#include<string.h>
int main()
{
	char sh[100] ;
	int n,i,j,k;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(sh);
		for(j=0,k=strlen(sh)-1;j<k;j++,k--)
		{
			if(sh[j]!=sh[k])
			break;
		}
		if(j>=k)
		printf("yes\n");
		else
		printf("no\n");
 
	}
	return 0;
}