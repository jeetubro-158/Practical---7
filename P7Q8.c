#include <stdio.h>
void main()
{
    int a=20,b=5;
    int *p1=&a,*p2=&b;
    int add,sub;
    add = *p1 + *p2;
    sub = *p1 - *p2;
    printf("Addition = %d & Subtraction = %d\n", add,sub);

}