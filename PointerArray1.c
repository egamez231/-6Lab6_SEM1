#include <stdio.h>
#define SIZE 6
int main()
{
    int array[SIZE]={5,11,23};
    int *arrPtr;
    int i,j;

//pointers operation on array
    printf("\nPointers operation on array:\n");
    arrPtr = array;
    for(i=0;i<SIZE;i++)
    printf("arrayPtr points to array[%d] = %d\n", i,*(arrPtr + i));

//regular operation on array
    printf("\nRegular operation on array:\n");
    for(j=0;j<SIZE;j++)
    printf("array [%d] = %d\n", j, array[j]);
    return 0;
}
