#include <stdio.h>
int n,a[105],s,tot;
int main()
{
   int i; 
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    s/=n;
    for( i=1;i<=n;i++)
        a[i]-=s;
    for( i=2;i<=n;i++)
        if(a[i-1]!=0)
        {
            a[i]+=a[i-1];
            a[i-1]=0;
            tot++;
        }
    printf("%d",tot);
    return 0;
}