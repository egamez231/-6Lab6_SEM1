#include <stdio.h>

int main ()
{
    float val = 4.50;
    float *vPtr = &val;
    *vPtr *= 5;
    printf("%.2f", *vPtr);

    return 0;
}
