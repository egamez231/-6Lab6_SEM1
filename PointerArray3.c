#include <stdio.h>

int getData (int*,int *);
int devide (int, int, int*, int*);
void print (int, int);

int main()
{
    int Num1, Num2, Q, R;

    getData (&Num1, &Num2);
    devide (Num1, Num2, &Q,&R);
    print(Q,R);

}

int getData (int *iNum1, int *iNum2)
{
    printf("Enter two integers : ");
    scanf("%d%d",iNum1,iNum2);
}

int devide (int No_1, int No_2, int *sum, int *remain)
{
    *sum= No_1 / No_2;
    *remain = No_1 - (No_2 * (*sum));
}

void print (int quo, int remain)
{
    printf ("\n\nQuotient : %d",quo );
    printf ("\nRemainder : %d",remain);
}
