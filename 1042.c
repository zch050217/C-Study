#include <stdio.h> 
#include <string.h>

void swap(char *s1, char *s2) 
{ 
    char t[100]; 
    strcpy(t, s1);
    strcpy(s1, s2);
    strcpy(s2, t);
} 

void exchange(char *p1, char *p2, char *p3) 
{ 
    if(strcmp(p1, p2) > 0) 
        swap(p1, p2); 
    if(strcmp(p1, p3) > 0) 
        swap(p1, p3); 
    if(strcmp(p2, p3) > 0) 
        swap(p2, p3); 
} 

int main() 
{ 
    char a[100], b[100], c[100], *p1, *p2, *p3; 
    gets(a); 
    gets(b); 
    gets(c); 
    p1 = a; 
    p2 = b; 
    p3 = c;  
    exchange(p1, p2, p3); 
    printf("%s\n%s\n%s\n", a, b, c); 
    return 0; 
}