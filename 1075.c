#include <stdio.h>
int main() {
    int profit;
    scanf("%d", &profit);
    if (profit <= 100000) {
        printf("%d\n", profit * 10);
    } else if (profit <= 200000) {
        int base = 10000 * 10;
        int extra = (profit - 100000) * 7.5;
        printf("%d\n", base + extra);
    } else if (profit <= 400000) {
        int base = 10000 * 10 + 10000 * 7.5;
        int extra = (profit - 200000) * 5;
        printf("%d\n", base + extra);
    } else if (profit <= 600000) {
        int base = 10000 * 10 + 10000 * 7.5 + 20000 * 5;
        int extra = (profit - 400000) * 3;
        printf("%d\n", base + extra);
    } else if (profit <= 1000000) {
        int base = 1495 * 1;
        int extra = (profit - 600000) * 1.5;
        printf("%d\n", base + extra);
    } else {
        int base = (int)(1495 * 1.1); // 四舍五入到整数位
        printf("%d\n", base + (profit - 1495) * 1);
    }
    return 0;
}