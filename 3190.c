#include<stdio.h>
int main(){
    int a , b , flag = 1 , ans;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (b == 0)
    {
    printf("Divided by zero!");
    flag = 0;
    }
    if (c != '+' && c != '-' && c != '*' && c != '/')
    {
        printf("Invalid operator!");
        flag = 0;
    }
    if (flag)
    {
        switch (flag)
        {
        case '+':
            //ans = 
            break;
        
        default:
            break;
        }
    }
}