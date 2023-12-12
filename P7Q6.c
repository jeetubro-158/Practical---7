#include <stdio.h>
void main()
{
    int a[]={10,20,30,40,50},b[5]={0,0,0,0,0},i;
    int *p=a;
    int *q=b;
    printf("Array A: ");
    for(i=0; i<5; i++){
        printf("%d\t", *p);
        p++;
    }
    printf("\n");
    printf("Array B: ");
    p=a;
    for(i=0; i<5; i++){
        *q = *p;
        printf("%d\t", *q);
        p++;
        q++;
    }

    
}