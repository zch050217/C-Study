//法一
#include<stdio.h> 
#include<string.h> 
int main()
{   
    char sh[60]; // 声明一个字符数组用于存储输入的字符串
    int i;       // 声明一个整数变量 i 用于循环迭代

    gets(sh);    // 从用户输入中获取字符串，注意 gets() 不安全

    for(i = 0; i < strlen(sh); i++) // 循环处理字符串中的每个字符
    {
        if(sh[i] >= 'a' && sh[i] <= 'z' || sh[i] >= 'A' && sh[i] <= 'Z') // 检查字符是否是字母
        {
            if(sh[i] == 'Z' || sh[i] == 'z') // 如果字符是 'Z' 或 'z'，进行回绕处理
                sh[i] = sh[i] - 25;
            else
                sh[i] += 1; // 否则，将字符向前移动一个位置
        }
    }

    puts(sh); // 输出处理后的字符串

    return 0;
}




//法二
#include<stdio.h>
#include<ctype.h>
int main(){
    char str[51]; // 声明一个字符数组用于存储输入的字符串
    fgets(str, sizeof(str), stdin); // 从标准输入获取字符串，限制最大长度为 50 字符

    for(int i = 0; str[i] != '\0'; i++) // 循环处理字符串中的每个字符，直到遇到字符串结束符
    {
        if(isalpha(str[i])) // 检查字符是否是字母
        {
            if(islower(str[i])) // 如果是小写字母
            {
                printf("%c", (str[i] - 'a' + 1) % 26 + 'a'); // 向前移动小写字母并保持为小写字母
            }
            else // 否则，是大写字母
            {
                printf("%c", (str[i] - 'A' + 1) % 26 + 'A'); // 向前移动大写字母并保持为大写字母
            }
        }
        else
        {
            printf("%c", str[i]); // 如果不是字母，直接输出字符
        }
    }

    printf("\n"); // 输出换行符
    return 0;
}