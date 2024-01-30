#include <stdio.h>
#include <string.h>
int main() {
    int n, i;
    char arr[4]; // 字符数组长度为4，最后一个位置为'\0'
    scanf("%d", &n);
    for (i = 0; i < 3; i++) {
        arr[i] = n % 10 + '0'; // 将数字转换为字符存入数组
        n /= 10;
    }
    arr[3] = '\0'; // 添加字符串结束标志
    printf("%s\n", arr);
    return 0;
}
