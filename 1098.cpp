#include<stdio.h>
#include<string.h>
int main()
{
	char sh[100] ;
	int i,word=1;
	while(gets(sh)!=NULL)
	{ word=1;
		 for(i=0;i<strlen(sh);i++)
		 if(sh[i]==' ')
		 word=1;
		 else if(word==1)
		 {word=0;
		  sh[i]-=32;
		 }		 
		 puts(sh);
	}
	return 0;
}