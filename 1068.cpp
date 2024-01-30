#include <stdio.h>
int main()
{
    int n,f[20]={0},i,j;
    scanf("%d", &n);
    f[0]=1;f[1]=1;
    for(i=2;i<=n;i++)
       for(j=0;j<i;j++)
          f[i]+=f[j]*f[i-j-1];
printf("%d\n",f[n]); 
    return 0;
}