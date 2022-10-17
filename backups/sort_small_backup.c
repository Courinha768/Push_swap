#include "push_swap.h"

void    sortidk(int *a, int size)
{
    int i = 1;

    while (i < size && a[i - 1] < a[i])
        i++;
    if (i == size)
        return ;
    if (i > size / 2)
    {
        i = size - i;
        while (i--)
            rra(a, size);
    }
    else
        while (i--)
            ra(a, size);
}

void	sort_3(int *a)
{
	if (a[0] > a[1] && a[1] < a[2] && a[0] < a[2])
		sa(a);
	else if (a[0] > a[1] && a[1] < a[2] && a[0] > a[2])
		ra(a, 3);
	else if (a[0] > a[1] && a[1] > a[2] && a[0] > a[2])
	{
		sa(a);
		rra(a, 3);
	}
	else if (a[0] < a[1] && a[1] > a[2] && a[0] > a[2])
		rra(a, 3);
	else if (a[0] < a[1] && a[1] > a[2] && a[0] < a[2])
	{
		sa(a);
		ra(a, 3);
	}
}

void    a_sort_5(int *a)
{
    int i = 0;

    while (a[i] < a[i + 1])
        i++;
    i += 1;
	if (i < 1)
		return ;
    if (i < 3)
        while (i--)
            ra(a, 5);
    else
    {
        i = 4 - i;
        while (i-- > 0)
            rra(a, 5);
    }
        
}

void	sort_5(int *a, int *b)
{
    pb(a, b, 5);
	pb(a, b, 5);
	sort_3(a);
    if (b[0] > b[1])
        sb(b);
    if (b[0] < a[1] && b[0] > a[0])
        ra(a, 5);
    else if (b[0] < a[2] && b[0] > a[1])
        rra(a, 5);
    pa(a, b, 5);
    if (b[0] > a[0] && b[0] < a[1])
        ra(a, 5);
    else if (b[0] > a[1] && b[0] < a[2])
    {
        ra(a, 5);
        ra(a, 5);
    }
    else if (b[0] > a[2] && b[0] < a[3])
        rra(a, 5);
    else if (b[0] < a[0] && b[0] > a[3])
        ra(a, 5);
	else if (b[0] > a[0] && b[0] > a[1] && b[0] > a[2] && b[0] > a[3])
        a_sort_5(a);
    pa(a, b, 5);
    sortidk(a, 5);
}