#include<stdio.h>
#include<math.h>
int main(){
    int num , len = 0 ,temp;
    scanf("%d",&num);
    //输出位数
    temp = num;
    if (num == 0)
    {
        printf("1\n");
        printf("0\n");
        printf("0");
    }
    else{
        while (temp > 0)
        {
            temp /= 10;
            len++;
        }
        printf("%d\n",len);
        //正序空格输出
        temp = num;
        int mask,output;
        mask = pow(10,len-1);
        while (mask>0)
        {
            output = temp / mask;
            temp %= mask;
            mask /= 10;
            printf("%d ",output);
        }
        printf("\n");
        //倒序输出
        temp = num;
        while (temp > 0)
        {
            output = temp % 10;
            temp /= 10;
            printf("%d",output);
        }
    }    
}
