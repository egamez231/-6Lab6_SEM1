#include <stdio.h>

int main ()
{
    int num = 11;
    int *ptr;

    ptr = &num;
    printf("%d\n%d\n", num, *ptr);

    return 0;
}
