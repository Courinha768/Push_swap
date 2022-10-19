#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b, int size)
{
	int		i;
	t_stack	*na;

	write(1, "pa\n", 3);
	na = ft_calloc(size, sizeof(int) * 2);
	na[0] = b[0];
	i = -1;
	while (a[++i].value)
		na[i + 1] = a[i];
	i = -1;
	while (++i < size - 1 && b[i + 1].value)
		b[i] = b[i + 1];
	b[i] = nullt_stack(b[i]);
	i = -1;
	while (na[++i].value)
		a[i] = na[i];
	free(na);
}

void	pb(t_stack *a, t_stack *b, int size)
{
	int		i;
	t_stack	*nb;

	write(1, "pb\n", 3);
	nb = ft_calloc(size, sizeof(int) * 2);
	nb[0] = a[0];
	i = -1;
	while (b[++i].value)
		nb[i + 1] = b[i];
	i = -1;
	while (++i < size - 1 && a[i + 1].value)
		a[i] = a[i + 1];
	a[i] = nullt_stack(a[i]);
	i = -1;
	while (nb[++i].value)
		b[i] = nb[i];
	free(nb);
}
