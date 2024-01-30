#include<stdio.h>
int main() 
{ 
int a[10000];  
int i,f;  
int n;  
while(scanf("%d",&n)!=EOF)
{ 
for(i=0;i<n;i++)  
   scanf("%d",&a[i]);  
  
f=1;  
for(i=0;i<n;i++)   
if(a[i]%2==1) 
f=f*a[i]; 
printf("%d\n",f);    
} 
return 0;
}