#include<string.h>
#include<stdio.h>
void qulin(char s[])
{
    int flag=0,i;
    int n=strlen(s);
    for(i=0;i<n;++i)
    {
        if(s[i]=='.')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        for( i=n-1;i>=0;--i)
        {
            if(s[i]=='0')
            {
                s[i]='\0';
                n--;
            }
            else
                break;
        }
            if(s[n-1]=='.')
            {
                s[n-1]='\0';
            }
    }
}
 
int main()
{	char a[1000001],b[1000001];
    while(scanf("%s %s",a,b)!=EOF)
    {
        qulin(a);
        qulin(b);
        if(strcmp(a,b))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}