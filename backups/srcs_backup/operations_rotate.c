#include "../push_swap.h"

void	ra(int *a, int size)
{
	int first;
	int	i;

	write(1, "ra\n", 3);
	i = -1;
	first = a[0];
	while(++i < size - 1 && a[i + 1])
		a[i] = a[i + 1];
	a[i] = first;
}

void	rb(int *b, int size)
{
	int first;
	int	i;

	write(1, "rb\n", 3);
	i = -1;
	first = b[0];
	while(++i < size - 1 && b[i + 1])
		b[i] = b[i + 1];
	b[i] = first;
}

void	rr(int *a, int *b, int size)
{
	ra(a, size);
	rb(b, size);
}