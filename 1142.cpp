#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int T,n;
    double num[110];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%lf",&num[i]);
        sort(num,num+n);
        printf("%.2lf\n",num[n-1]); 
    }   
}