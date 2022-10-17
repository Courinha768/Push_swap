#include "../push_swap.h"

void	pa(int *a, int *b, int size)
{
	int	i;
	int *na;

	write(1, "pa\n", 3);
	na = ft_calloc(size, 4);
	na[0] = b[0];
	i = -1;
	while (a[++i])
		na[i + 1] = a[i];
	i = -1;
	while(++i < size - 1 && b[i + 1])
		b[i] = b[i + 1];
	b[i] = 0;
	i = -1;
	while (na[++i])
		a[i] = na[i];
	free(na);
}

void	pb(int *a, int *b, int size)
{
	int	i;
	int *nb;

	write(1, "pb\n", 3);
	nb = ft_calloc(size, 4);
	nb[0] = a[0];
	i = -1;
	while (b[++i])
		nb[i + 1] = b[i];
	i = -1;
	while(++i < size - 1 && a[i + 1])
		a[i] = a[i + 1];
	a[i] = 0;
	i = -1;
	while (nb[++i])
		b[i] = nb[i];
	free(nb);
}