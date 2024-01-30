#include <stdio.h>

int main()
{
    int list[3];
    int t;
    
    for (int i = 0; i < 3; i++)
        scanf("%d", &list[i]);
    
    for (int j = 0; j < 2; j++) {
        for (int z = 0; z < 2 - j; z++) {
            if (*(list + z) > *(list + z + 1)) {
                t = *(list + z);
                *(list + z) = *(list + z + 1);
                *(list + z + 1) = t;
            }
        }
    }
    
    for (int i = 0; i < 3; i++)
        printf("%d ", *(list + i));
    
    return 0;
}