#include<stdio.h>
int main(){
    int a1, a2, n, d ,an;
    scanf("%d %d %d",&a1, &a2, &n);
    d = a2 - a1;
    an = a1 + (n - 1) * d;
    printf("%d",an);
}