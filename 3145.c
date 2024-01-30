#include<stdio.h>
int main(){
    int flu, die;
    float per;
    scanf("%d %d",&flu,&die);
    per = 1.0 * die / flu * 100;
    printf("%.3f%%",per);
}