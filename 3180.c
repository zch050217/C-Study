#include<stdio.h>
int main(){
    long long a;
    scanf("%lld",&a);
    if (a % 3 == 0 && a % 5 == 0)
    {
        printf("YES");
    }
    else printf("NO");
}