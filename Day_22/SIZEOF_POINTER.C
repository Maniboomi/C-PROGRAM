#include <stdio.h>
int main()
{
    int *p = NULL;
    int *q = p + 1;
    printf("Size of int: %d bytes\n", (int*)q);

    double *p2 = NULL;
    double *q2 = p2 + 1;
    printf("Size of double: %d bytes\n", (double*)q2);

    return 0;
}
