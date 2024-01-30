#include<stdio.h>
int chan(int a,int b);
int main() {
    int a,b,n;
     while(~scanf("%d",&n)) {
        while(n--) {
            scanf("%d%d",&a,&b);
            if(chan(a,b))
            printf("YES\n");
            else
            printf("NO\n");

        }
    }
    return 0;
}
int chan(int a,int b) {
    int sum1,sum2;
    sum1=sum2=0;
    for(int i=1; i<a; i++) {
        if(a%i==0) {
            sum1+=i;
        }
    }
    for(int j=1; j<b; j++) {
        if(b%j==0) {
            sum2+=j;
        }
    }
    if(sum1==b&&sum2==a)
        return 1;
    return 0;
}