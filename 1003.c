#include<stdio.h>
int main(){

    double r,h,C1,Sa,Sb,Va,Vb,pi;
    pi = 3.1415926535897932;

    scanf("%lf %lf",&r,&h);

    C1 = 2 * pi * r;
    Sa = pi * r * r;
    Sb = 4 * pi * r * r;
    Va = 1.333333333333333333333 * pi * r * r * r;
    Vb = Sa * h;

    printf("C1=%.2lf\nSa=%.2lf\nSb=%.2lf\nVa=%.2lf\nVb=%.2lf\n",C1,Sa,Sb,Va,Vb);

    return 0;
}