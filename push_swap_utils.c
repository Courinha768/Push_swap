#include "push_swap.h"

stack    nullstack(stack c)
{
    c.nbr = 0;
    c.value = 0;
    return (c);
}

int nbr_checker(stack *a, limit lim)
{
    int i = -1;

    while (a[++i].value)
        if (a[i].value >= lim.bot && a[i].value <= lim.top)
            return (1);
    return (0);
}

limit define_lim(int ac)
{
    static int  i = 0;
    int         chunk_nbr;
    limit       lim;

    if (ac < 101)
        chunk_nbr = 5;
    else
        chunk_nbr = 11;
    lim.bot = ((ac / chunk_nbr) * i) + 1;
    lim.top = ((ac / chunk_nbr) * (i + 1));
    i++;
    return (lim);
}

void    push_top(stack *a, limit lim, int ac)
{
    int i = 0;
    int j = ac;

    while (a[i].value < lim.bot || a[i].value > lim.top)
        i++;
    while (a[j].value < lim.bot || a[j].value > lim.top)
        j--;
    j = ac - j;
    if (i < j)
        while (a[0].value < lim.bot || a[0].value > lim.top)
            ra(a, ac);
    else
        while (a[0].value < lim.bot || a[0].value > lim.top)
            rra(a, ac);
}