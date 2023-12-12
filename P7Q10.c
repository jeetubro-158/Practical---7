#include <stdio.h>
void swap(int*, int*);
void main()
{
    int a=10,b=5;
    printf("Before swapping a = %d & b = %d\n", a,b);
    swap(&a, &b);
    printf("After swapping a = %d & b = %d\n", a,b);

}
void swap(int *p1, int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}