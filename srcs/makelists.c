#include "../push_swap.h"

void	ft_sort_int_tab(int *array, int size)
{
	int	i;
	int	j = -1;
	int	a = 0;

	while (++j < size)
	{
		i = -1;
		while (++i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				a = array[i + 1];
				array[i + 1] = array[i];
				array[i] = a;
			}
		}
	}
}

void copy_nbrs(stack *a, int *array)
{
    int i = -1;

    while (a[++i].nbr)
        array[i] = a[i].nbr;
}

void    makelist(char **nbrs, stack *a, stack *b, int size)
{
    int i = -1;
    int j = -1;
    int array[size];

    while (nbrs[++i + 1])
    {
        a[i].nbr = ft_atoi(nbrs[i + 1]);
        b[i].nbr = 0;
        b[i].value = 0;
    }
    copy_nbrs(a, array);
    ft_sort_int_tab(array, size);
    while (++j < size)
    {
        i = 0;
        while (a[i].nbr != array[j])
            i++;
        a[i].value = j + 1;
    }
}