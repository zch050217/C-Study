#include <stdio.h>
#include <math.h>

int prime_judge(int n) {
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if (prime_judge(n)) printf("Prime");
    else printf("Not Prime");
    return 0;
}