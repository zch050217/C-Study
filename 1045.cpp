#include <stdio.h> 
int main() 
{ 
int a[100],n,i,k=0,num=0;
scanf("%d",&n);
 	for(i=0;i<n;i++)
	a[i]=1;
for(i=0;i<n;i++)
{   
if(a[i]==1)
 k=k+1;
 if(k==3)
{num=num+1;k=0;	a[i]=0;
} 
if(num==n-1)
break;  
 if(i==n-1)	
 i=-1;
}
 	for(i=0;i<n;i++)
	if(a[i]==1)
printf("%d\n",i+1);	
	 return 0;
}