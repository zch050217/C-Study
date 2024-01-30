#include<stdio.h> 
int main() 
{ 	
int n,i,j,x,y; 	
char a[10],b[10]; 	
scanf("%d\n",&n); 	
for (j=1;j<=n;j++) 	
{ 		
x=y=0; 		
while (1) 		
{ 			
scanf("%s",a); 			
if (a[0]=='+')break; 			
if (a[0]=='o'&&a[1]=='n')x=x*10+1; 			
if (a[0]=='t'&&a[1]=='w')x=x*10+2; 			
if (a[0]=='t'&&a[1]=='h')x=x*10+3; 			
if (a[0]=='f'&&a[1]=='o')x=x*10+4; 			
if (a[0]=='f'&&a[1]=='i')x=x*10+5; 			
if (a[0]=='s'&&a[1]=='i')x=x*10+6; 			
if (a[0]=='s'&&a[1]=='e')x=x*10+7; 			
if (a[0]=='e'&&a[1]=='i')x=x*10+8; 			
if (a[0]=='n'&&a[1]=='i')x=x*10+9; 			
if (a[0]=='z'&&a[1]=='e')x=x*10; 		
} 		
while (1) 		
{ 			
scanf("%s",b); 			
if (b[0]=='=')break; 			
if (b[0]=='o'&&b[1]=='n')y=y*10+1; 			
if (b[0]=='t'&&b[1]=='w')y=y*10+2; 			
if (b[0]=='t'&&b[1]=='h')y=y*10+3; 			
if (b[0]=='f'&&b[1]=='o')y=y*10+4; 			
if (b[0]=='f'&&b[1]=='i')y=y*10+5; 			
if (b[0]=='s'&&b[1]=='i')y=y*10+6; 			
if (b[0]=='s'&&b[1]=='e')y=y*10+7; 			
if (b[0]=='e'&&b[1]=='i')y=y*10+8; 			
if (b[0]=='n'&&b[1]=='i')y=y*10+9; 			
if (b[0]=='z'&&b[1]=='e')y=y*10;
} 		
printf("%d\n",x+y); 	
} 
return 0; }