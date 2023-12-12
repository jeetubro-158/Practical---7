#include <stdio.h>
void main()
{
    int a=10,b=20;
    int *p1,*p2;
    p1=&a, p2=&b;
    printf("Before swapping a = %d & b = %d\n", *p1,*p2);
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("After swapping a = %d & b = %d\n", *p1,*p2);
    
}