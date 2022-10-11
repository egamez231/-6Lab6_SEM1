#include <stdio.h>

int main ()
{
    float *nomPtr;
    float nom = 3.25;
    nomPtr = &nom;
    *nomPtr = 4.25 + *nomPtr * 5;
    printf("%.2f", *nomPtr);

    return 0;
}
