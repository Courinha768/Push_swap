#include "push_swap.h"

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
    limit   lim;
    int     j = ac;

    makelist(av, a, b, ac);
    if (ac == 3)
        sort_3(a);
    else if (ac == 5)
        sort_5(a, b);
    else
    {
        while(a[0].value)
        {
            lim = define_lim(ac);
            while (nbr_checker(a, lim))
            {
                push_top(a, lim, ac);
                pb(a, b, ac);
            }
        }
        while (j)
        {
            while (b[0].value != j)
                rb(b, ac);
            pa(a, b, ac);
            j--;
        }
    }
}

// int i = 0;
// while (i < 80)
// {
//     ft_putnbr_fd(b[i].nbr, 1);
//     ft_putchar_fd(10, 1);
//     i++;
// }