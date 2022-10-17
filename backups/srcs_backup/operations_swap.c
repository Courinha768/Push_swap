#include "../push_swap.h"

void	sa(int *a)
{
	int	swap;

	write(1, "sa\n", 3);
	swap = a[0];
	a[0] = a[1];
	a[1] = swap;
}

void	sb(int *b)
{
	int	swap;

	write(1, "sb\n", 3);
	swap = b[0];
	b[0] = b[1];
	b[1] = swap;
}

void	ss(int *a, int *b)
{
	sa(a);
	sb(b);
}