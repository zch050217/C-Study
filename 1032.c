#include<stdio.h>
#include<string.h>

void printCharacters(char str[]) {
    int i, n;
    n = strlen(str);
    for(i = 0; i < n; i++) {
        printf("%c ", str[i]);
    }
}

int main() {
    char a[5];
    gets(a);
    printCharacters(a);
    return 0;
}