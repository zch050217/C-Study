#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,f=0;
	char a[100];
	scanf("%d",&n);
	getchar( );
	for(i=0;i<n;i++)
	{
		gets(a);f=0;
		if((a[0]=='_')||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
		{
			for(j=0;a[j]!='\0';j++)
			{
				if(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')
			   	||(a[j]>='0'&&a[j]<='9'))   ;
				else f++;
				
			}
			if(f==0) printf("yes\n");
			else printf("no\n");
		}
		else printf("no\n");	
	}
	return 0;
}