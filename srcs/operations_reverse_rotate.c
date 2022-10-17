#include "../push_swap.h"

void	rra(stack *a, int size)
{
	int 	i;
	stack	last;

	write(1, "rra\n", 4);
	i = size - 1;
	while (!a[i].value)
		i--;
	last = a[i];
	i += 1;
	while(--i > 0)
		a[i] = a[i - 1];
	a[0] = last;
}

void	rrb(stack *b, int size)
{
	int i;
	stack	last;

	write(1, "rrb\n", 4);
	i = size - 1;
	while (!b[i].value)
		i--;
	last = b[i];
	i += 1;
	while(--i > 0)
		b[i] = b[i - 1];
	b[0] = last;
}

void	rrr(stack *a, stack *b, int size)
{
	rra(a, size);
	rrb(b, size);
}