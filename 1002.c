#include <stdio.h>
int main() {
    char c1, c2, c3, c4, c5;

    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);

    c1 = ((c1 - 'A' + 4) % 26) + 'A';
    c2 = ((c2 - 'a' + 4) % 26) + 'a';
    c3 = ((c3 - 'a' + 4) % 26) + 'a';
    c4 = ((c4 - 'a' + 4) % 26) + 'a';
    c5 = ((c5 - 'a' + 4) % 26) + 'a';
    
    printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
    return 0;
}
