#include <stdio.h>

int main()
{
    int list[21];
    int n, m;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    
    scanf("%d", &m);
    
    int *ptr = &list[n-1];
    
    for (int j = n-1; j >= 0; j--)
    {
        *(ptr + m) = *ptr;
        ptr--;
    }
    
    for (int z = n-1+m; z > n-1; z--)
    {
        list[z % n] = list[z];
        list[z] = 0;
    }
    
    for (int k = 0; k < n; k++)
    {
        printf("%d ", list[k]);
    }
    
    return 0;
}