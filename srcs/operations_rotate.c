#include "../push_swap.h"

void	ra(stack *a, int size)
{
	stack first;
	int	i;

	write(1, "ra\n", 3);
	i = -1;
	first = a[0];
	while(++i < size - 1 && a[i + 1].value)
		a[i] = a[i + 1];
	a[i] = first;
}

void	rb(stack *b, int size)
{
	stack first;
	int	i;

	write(1, "rb\n", 3);
	i = -1;
	first = b[0];
	while(++i < size - 1 && b[i + 1].value)
		b[i] = b[i + 1];
	b[i] = first;
}

void	rr(stack *a, stack *b, int size)
{
	ra(a, size);
	rb(b, size);
}