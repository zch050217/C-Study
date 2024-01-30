#include<stdio.h>
#include<string.h>
int main()
{
	char sh[100],max;
	int i,j,len;  
	while(gets(sh)!=NULL)
	{len=strlen(sh);
		 for(j=0,max=sh[0];j<len;j++)
		{
			if(sh[j]>max)
			 max=sh[j]; 	 
		}		
		 for(j=0;j<len;j++)
		 {  putchar(sh[j]); 
 				if(sh[j]==max)
 				printf("(max)");
 		}
		printf("\n"); 
	}
	return 0;
}