#include<stdio.h>
int main(){
    long long a;
    scanf("%lld",&a);
    if (a == 0)
    {
        printf("zero");
    }
    if (a > 0)
    {
        printf("positive");
    }
    if (a < 0)
    {
        printf("negative");
    }
}