#include <stdio.h>
void main()
{
    int a=20,b=5;
    int *p1=&a,*p2=&b;
    int mult,div;
    mult = *p1 * *p2;
    div = *p1 / *p2;
    printf("multition = %d & divtraction = %d\n", mult,div);

}