#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
#define inf 999999999999999999
#define maxn 50050
struct node{
    long long w,h;
}a[maxn],b[maxn];
 
bool cmp(node a,node b){
    if(a.w==b.w)return a.h>b.h;
    return a.w>b.w;
}
long long dp[maxn];
long long q[1111111];
long long getup(int x)
{
    return dp[x];
}
long long getdown(int x)
{
    return -b[x+1].w;
 
}
 
 
int main()
{
    int n,m,i,j,tot,k;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++){
            scanf("%d%d",&a[i].w,&a[i].h);
        }
        sort(a+1,a+1+n,cmp);
        tot=1;b[tot].w=a[1].w;b[tot].h=a[1].h;
        for(i=2;i<=n;i++){
            if(b[tot].h>=a[i].h)    continue;
            tot++;b[tot].w=a[i].w;b[tot].h=a[i].h;
 
        }
        int front,rear;
        front=1;rear=1;
        q[rear]=0;
        for(i=1;i<=tot;i++){
            //dp[i]=b[1].w*b[i].h;  这里如果前面不把0加入队列的话，那么这句话要加上。
            while(front<rear && getup(q[front+1])-getup(q[front])<=b[i].h*(getdown(q[front+1])-getdown(q[front]) )  ){
                front++;
            }
            k=q[front];
            dp[i]=dp[k]+b[k+1].w*b[i].h;
            //dp[i]=min(dp[i],dp[k]+b[k+1].w*b[i].h);
            while(front<rear && ( getup(q[rear])-getup(q[rear-1] ) )*(getdown(i)-getdown(q[rear] ))>=( getup(i)-getup(q[rear] ) )*(getdown(q[rear])-getdown(q[rear-1] ))   ){
                rear--;
            }
            rear++;
            q[rear]=i;
 
        }
        printf("%lld\n",dp[tot]);
    }
    return 0;
}