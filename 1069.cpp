#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,j,k,p,q,w;
	char a[100],c[100];//a[]用来存放中缀表达式中所有内容 ,c[]用来存放后缀表达式中所有内容  
	int b[100],d[100];//b[]用来存放符号，d[] 用来存放符号 类似于栈 
	gets(a);
	int t;
	t=strlen(a);
	j=0;
	for(i=0;i<t;i++)
	{
		b[i]=0;
		if(a[i]=='+'){j++;b[i]=10;}
		if(a[i]=='-'){j++;b[i]=9;}
		if(a[i]=='*'){j++;b[i]=7;}
		if(a[i]=='/'){j++;b[i]=6;}
		if(a[i]=='^'){j++;b[i]=4;}
		if(a[i]=='('){j++;b[i]=2;}
		if(a[i]==')'){j++;b[i]=1;}
	}
	k=0;p=0;
	for(i=0;i<t;i++)
	{
		if(b[i]==0){c[k]=a[i];k++;}
		else if(b[i]!=0)
			{
				
                if(p!=0)
                {
                	if(b[i]==1)
                	{
                		while(d[p-1]!=2)
						{
							if(d[p-1]==10){c[k]='+';k++;}
	                		if(d[p-1]==9){c[k]='-';k++;}
	                		if(d[p-1]==7){c[k]='*';k++;}
	                		if(d[p-1]==6){c[k]='/';k++;}
	                		if(d[p-1]==4){c[k]='^';k++;}
	                		p=p-1;
						} 
						p--; 
						continue;
	                	//出现右括号 
	                }
                	if(b[i]==d[p-1]+1|| b[i]==d[p-1]-1||b[i]==d[p-1])
			        {
	                		if(d[p-1]==10){c[k]='+';k++;}
	                		if(d[p-1]==9){c[k]='-';k++;}
	                		if(d[p-1]==7){c[k]='*';k++;}
	                		if(d[p-1]==6){c[k]='/';k++;}
	                		if(d[p-1]==4){c[k]='^';k++;}
	                		p=p-1;
	                }//相同优先级 
                	if(b[i]>d[p-1]+1&&d[p-1]!=2)
                	{
	                	for(q=p-1;q>=0;q--)
	                	{
	                		if(b[i]<d[q]-1||d[q]==2){break;}
	                		if(d[q]==10){c[k]='+';k++;}
	                		if(d[q]==9){c[k]='-';k++;}
	                		if(d[q]==7){c[k]='*';k++;}
	                		if(d[q]==6){c[k]='/';k++;}
	                		if(d[q]==4){c[k]='^';k++;}
	                	}
	                	q=q+1;
	                	p=q;
	                }//后面优先级低  
                }
                
                d[p]=b[i];
                p++;
		    }
		   
	}

	 for(q=p-1;q>=0;q--)
		    {
	                		if(d[q]==10){c[k]='+';k++;}
	                		if(d[q]==9){c[k]='-';k++;}
	                		if(d[q]==7){c[k]='*';k++;}
	                		if(d[q]==6){c[k]='/';k++;}
	                		if(d[q]==4){c[k]='^';k++;}
     	    }
     	    //取出最后存储的符号 
	for(i=0;i<k;i++)
	{
		printf("%c ",c[i]);
	}
	int m,n,l;
	m=1;n=1;l=1;
	int hei[100],mei[100];
	for(i=0;i<k;i++)
	{
	mei[i]=0;
	hei[i]=c[i]-48;
	if(hei[i]==46||hei[i]<0)mei[i]=1;
	}
	printf("\n");
	for(i=2;i<k;i++)
	{
		if((hei[i]==-6||hei[i]==-5||hei[i]==46||hei[i]==-3||hei[i]==-1)&&mei[i]==1)
		{
			if(hei[i]==-6)hei[i-2]=hei[i-2]*hei[i-1];
			if(hei[i]==-5)hei[i-2]=hei[i-2]+hei[i-1];
			if(hei[i]==-3)hei[i-2]=hei[i-2]-hei[i-1];
			if(hei[i]==-1)hei[i-2]=hei[i-2]/hei[i-1];
			if(hei[i]==46)hei[i-2]=pow(hei[i-2],hei[i-1]);
			k=k-2;  
			for(j=i-1;j<k;j++)
			{
				hei[j]=hei[j+2];
				mei[j]=mei[j+2];
			}
			for(j=0;j<k;j++)
			{
			if((hei[j]==-6||hei[j]==-5||hei[j]==46||hei[j]==-3||hei[j]==-1)&&mei[j]==1)
		{
			if(hei[j]==-6){
				printf("* ");
			}
			if(hei[j]==-5)printf("+ ");
			if(hei[j]==-3)printf("- ");
			if(hei[j]==-1)printf("/ ");
			if(hei[j]==46)printf("^ ");
		}
				else printf("%d ",hei[j]);
			}
			printf("\n");
			
			i=0;
		}
	}
	return 0;
}