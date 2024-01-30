/*#include <stdio.h>

char judge_aeiou(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return c;
    else return 0;
}

int main(){
    char a[41];
    int i = 0;
    scanf("%s", a);
    printf("%s", a);
    while (a[i] != '\0')
    {
        printf("%c",judge_aeiou(a[i]));
        i++;
    }
    return 0;
}*/
#include <stdio.h>
//#include <ctype.h>

int is_vowel(char c) {
    //c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char str[41];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_vowel(str[i])) {
            putchar(str[i]);
        }
    }
    return 0;
}