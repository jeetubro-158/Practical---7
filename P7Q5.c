#include <stdio.h>
void main()
{
    int arr[]={10,50,40,20,30},i,sum=0;
    int *p=arr,*s=&sum;
    for(i=0; i<5; i++)
    {
        *s= *s + *p;
        p++;
    }
    printf("Sum = %d\n", *s);    
}