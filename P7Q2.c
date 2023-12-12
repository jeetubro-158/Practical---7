#include <stdio.h>
void main()
{
    int a=10;// varibales intialized
    char ch='A';
    float f=5.0;
    void *ptr;
    ptr=&a;
    printf("a = %d\n", *(int *)ptr); //pointers are used to access values
    ptr=&ch;
    printf("ch = %c\n", *(char *)ptr);
    ptr=&f;
    printf("f = %f\n", *(float *)ptr);
}