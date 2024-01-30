#include<stdio.h>
 #include<string.h>
int main() 
{ 

int n,i,j,num;  
char sh[1000];
  
 scanf("%d",&n);
  getchar(); 
for(i=1;i<=n;i++) 
{   num=0;
	gets(sh);
 	for(j=0;j<strlen(sh);j++)
	{
		if(sh[j]<0)	
		num++;		
	} 
	printf("%d\n",num/2);	
} 
return 0;
}