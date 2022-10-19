#include "../push_swap.h"

void	sa(t_stack *a)
{
	t_stack	swap;

	write(1, "sa\n", 3);
	swap = a[0];
	a[0] = a[1];
	a[1] = swap;
}

void	sb(t_stack *b)
{
	t_stack	swap;

	write(1, "sb\n", 3);
	swap = b[0];
	b[0] = b[1];
	b[1] = swap;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
