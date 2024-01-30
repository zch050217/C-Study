/*#include <stdio.h> 
void input(int a[10]);
void output(int a[10]); 
void reverse(int a[10]);
int main() 
{ 
int a[10];
 input(a); 
 reverse(a);
 output(a); 
 return 0; 
}
void input(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
}
void output(int a[10])
{
	int i;
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
}
void reverse(int a[10])
{
	int i,max=0,min=0,t;
	for(i=1;i<9;i++)
	if(a[i]>a[max])
	 max=i;
t=a[9];
	a[9]=a[max];
	a[max]=t;
	 for(i=1;i<9;i++)
	if(a[i]<a[min])
	 min=i; 
	  t=a[0];
	a[0]=a[min];
	a[min]=t;
} */
#include <stdio.h> 

void input(int *a);
void output(int *a); 
void reverse(int *a);

int main() 
{ 
    int a[10];
    input(a); 
    reverse(a);
    output(a); 
    return 0; 
}

void input(int *a)
{
    int i;
    for(i = 0; i < 10; i++)
        scanf("%d", a + i);
}

void output(int *a)
{
    int i;
    for(i = 0; i < 10; i++)
        printf("%d ", *(a + i));
}

void reverse(int *a)
{
    int i, max = 0, min = 0, t;
    for(i = 1; i < 9; i++)
    {
        if(*(a + i) > *(a + max))
            max = i;
    }
    t = *(a + 9);
    *(a + 9) = *(a + max);
    *(a + max) = t;
    
    for(i = 1; i < 9; i++)
    {
        if(*(a + i) < *(a + min))
            min = i;
    }
    t = *(a + 0);
    *(a + 0) = *(a + min);
    *(a + min) = t;
}