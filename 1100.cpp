#include <stdio.h> 
int f(int a,int b) 
{ 
    int t,r,x,q,p; 
    p=a;
    q=b; 
    if(a<b)  
    {  
        t=a;a=b;b=t;  
    } 
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    x=q/b*p;
    return x;  
} 

int main() 
{ 
    int a[10000];  
    int i,k;  
    int n;  
    while(scanf("%d",&n)!=EOF)
    { 
        for(i=0;i<n;i++)  
            scanf("%d",&a[i]);  

    k=1;  
    for(i=0;i<n;i++)   
        k=f(k,a[i]);   

    printf("%d\n",k);    
    } 
    return 0;
}