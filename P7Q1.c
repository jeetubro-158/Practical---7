#include <stdio.h>
void main()
{
    int a=10,b=20,sum=0; // varibales intialized
    int *p1=&a,*p2=&b;  //pointers declared and intialized
    sum=*p1+*p2;  //sum is perfomerd using pointers
    printf("The sum = %d\n", sum); //Sum is being printed.

}