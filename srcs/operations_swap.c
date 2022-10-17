#include "../push_swap.h"

void	sa(stack *a)
{
	stack	swap;

	write(1, "sa\n", 3);
	swap = a[0];
	a[0] = a[1];
	a[1] = swap;
}

void	sb(stack *b)
{
	stack	swap;

	write(1, "sb\n", 3);
	swap = b[0];
	b[0] = b[1];
	b[1] = swap;
}

void	ss(stack *a, stack *b)
{
	sa(a);
	sb(b);
}