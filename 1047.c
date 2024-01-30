#include <stdio.h>
struct DATA
{
    int year, month, day;
}today;

int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

int isLeap(int year)
{
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main()
{
    scanf("%d %d %d", &today.year, &today.month, &today.day);
    if (isLeap(today.year))
        months[1] = 29;
    else
        months[1] = 28;
    int sum = 0;
    for (int i = 0; i < today.month - 1; i++)
        sum += months[i];
    sum += today.day;
    printf("%d\n", sum);
    return 0;
}