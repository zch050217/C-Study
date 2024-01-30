#include <stdio.h>
#include <string.h> 

int main()
{
  char sh[100], ch;
  int n, m, i, j;
  
  scanf("%d", &n);
  getchar();
  gets(sh);
  scanf("%d", &m);
  
  char *ptr = sh;
  for (i = 0, j = m - 1; j < n; i++, j++)
    *(ptr + i) = *(ptr + j);
  
  *(ptr + i) = '\0';
  puts(sh);
  
  return 0;
}