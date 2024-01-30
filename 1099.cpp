#include<stdio.h>
#include<string.h>
void pp(char sh[],int num[]);
int main()
{
	char sh[100] ;
	int n,i,j,k;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(sh);int num[5]={0};
		pp(sh,num);
		  printf("a:%d\n",num[0]);
		  printf("e:%d\n",num[1]);
		  printf("i:%d\n",num[2]);
		  printf("o:%d\n",num[3]);
		  printf("u:%d\n",num[4]); 
	}
	return 0;
} 
void pp(char sh[],int num[])
{ int j;
	
		for(j=0;j<strlen(sh);j++)
		{
			if(sh[j]=='a')
			num[0]++;
			else if(sh[j]=='e')
			num[1]++;
			else if(sh[j]=='i')
			num[2]++;
			else if(sh[j]=='o')
			num[3]++;
			else if(sh[j]=='u')
			num[4]++;			 
		}
}