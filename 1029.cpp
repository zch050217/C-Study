#include <stdio.h>

void RE_array(char *str, int len)
{
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int get_len(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char str[100];
    scanf("%s", str);
    int len = get_len(str);
    RE_array(str, len);
    printf("%s", str);
    return 0;
}