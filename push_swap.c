#include "push_swap.h"

stack    nullstack(stack c)
{
    c.nbr = 0;
    c.value = 0;
    return (c);
}

int main(int ac, char **av)
{
    ac -= 1;
    if (ac < 1)
        return (0);
    sort(ac, av);
}

void    sort(int ac, char **av)
{
    stack   a[ac];
    stack   b[ac];
    int     i = -1;

    makelist(av, a, b, ac);
    if (ac == 3)
        sort_3(a);
    else if (ac == 5)
        sort_5(a, b);
    else
    {
        while (++i < 20)
        {
            while (a[0].value > 19)
                ra(a, ac);
            pb(a, b, ac);
        }
    }
}