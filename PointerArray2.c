#include <stdio.h>
#define SIZE 5


int main()
{
    int test1[SIZE]; int *test1Ptr;
    int test2[SIZE]; int *test2Ptr;
    int total[SIZE]; int *totalPtr;
    int i,j;
    test1Ptr = test1;
    test2Ptr = test2;
    totalPtr = total;

    for(i=0;i<SIZE;i++)
    {
        printf("\nEnter Test 1 and Test 2 marks :");
        scanf("%d%d",&test1Ptr [i], &test2Ptr [i]);


    }

    for(i=0;i<SIZE;i++)
    {
        printf ("\n\nTest1[%d] = %d Test2[%d] = %d\n", i, test1[i], i, test2[i]);
    }

    for(j=0;j<SIZE;j++)
    {
        totalPtr [j] = test1[j] + test2[j];
    }
    for(j=0;j<SIZE;j++)
    {
        printf ("\n\nTotal [%d] = %d", j, total[j]);
    }



return 0;
}

