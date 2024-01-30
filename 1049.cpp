#include <stdio.h>
#include <string.h> 
#define N 110
struct stu
{
	char num[30];
	char name[30];
	float score[3];
};
int main()
{
struct stu a[N];
int n,i; int sum1=0,sum2=0,sum3=0,max=0,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)	
 {	 scanf("%s%s%f%f%f",a[i].num,a[i].name,&a[i].score[0],&a[i].score[1],&a[i].score[2]);
     sum1=sum1+a[i].score[0];
     sum2=sum2+a[i].score[1];
     sum3=sum3+a[i].score[2];  
 }
      sum1=sum1/n;
      sum2=sum2/n;
      sum3=sum3/n;
      printf("%d %d %d\n",sum1,sum2,sum3);
 max= a[0].score[0]+a[0].score[1]+a[0].score[2] ;  
 for(i=1;i<n;i++)	
 {
 if(a[i].score[0]+a[i].score[1]+a[i].score[2]>max)
 {max=a[i].score[0]+a[i].score[1]+a[i].score[2];
    flag=i;}
 }  
 printf("%s %s %.0f %.0f %.0f\n",a[flag].num,a[flag].name,a[flag].score[0],a[flag].score[1],a[flag].score[2]); 
 return 0;
}