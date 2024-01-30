#include <stdio.h>  
struct a 
{  
    int s,e;  
}
t[101],temp;  
   
int main()
{  
    int n, sum, end, i, j;  
    scanf("%d",&n);
    while(n)
    {  
        for(i=0; i < n; i++)
        {  
            scanf("%d%d",&t[i].s,&t[i].e);  
        } 
    for(i = 0; i < n; i++) 
    for(j = i; j < n; j++)
    {
        if(t[i].e > t[j].e)
        {
            temp = t[i];
            t[i] = t[j];
            t[j] = temp;
        }
    }
    sum = 1; 
    end = t[0].e;  
    for(i = 1; i < n; i++)
    {
        if(t[i].s >= end)
        {  
            sum++;  
            end = t[i].e;  
        }   
    }  
    printf("%d\n",sum);  
    scanf("%d",&n);

    }      
    return 0;  
}
