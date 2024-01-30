#include<stdio.h>
int main(){
    //垃圾题目，有增长率
    int x, a, y, b;
    float sum;
    scanf("%d %d %d %d",&x,&a,&y,&b);
    sum = 1.0*(b * y - a * x) / (b - a);
    printf("%.2f",sum);
}