#include "push_swap.h"

void    prints(int *a, int *b)
{
    int i = -1;

    while (++i < 5)
        printf("\n%d %d", a[i], b[i]);
    printf("\n_ _\na b\n");
}

void    printst(stack *a, stack *b)
{
    int i = -1;

    while (++i < 5)
        printf("\n%d(%d) %d(%d)", a[i].nbr, a[i].value, b[i].nbr, b[i].value);
    printf("\n____ ____\n a    b  \n");
}