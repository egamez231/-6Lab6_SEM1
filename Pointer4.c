#include <stdio.h>
void funct1(int u, int v);
void funct2(int *pu, int *pv); //function prototype for funct2 which uses pointers

//(pass by reference)

int main()
{
    int u = 0;
    int v = 0;
    printf("\nBefore calling funct1: u = %d v = %d", u, v);
    funct1(u, v);
    printf("\nAfter calling funct1: u = %d v = %d", u, v);
    printf("\n\nBefore calling funct2: u = %d v = %d", u, v);
    funct2(&u, &v);
    printf("\nAfter calling funct2: u = %d v = %d\n", u, v);
return 0;
}
void funct1(int u, int v)
{
    u = 2;
    v = 6;
    printf("\nWithin funct1:\t u = %d v = %d", u, v);
}
void funct2(int *pu, int *pv)
{
    *pu = 2;
    *pv = 6;
    printf("\nWithin funct2:\t u = %d v = %d", *pu, *pv);
}
