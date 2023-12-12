#include <stdio.h>
void main()
{
    int arr[]={10,50,15,20,30},i;
    int *p=arr;
    for(i=0; i<5; i++){
        printf("Value of Cell %d = %d & address = %d\n", i+1,arr[i],p);
        p++;
    }
}