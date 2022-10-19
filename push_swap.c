#include "push_swap.h"

int	main(int ac, char **av)
{
	ac -= 1;
	if (ac < 1)
		return (0);
	sort(ac, av);
}

void	push_top_b(t_stack *b, int wanted, int ac)
{
	int	i;
	int	j;
	int	b_size;

	i = 0;
	b_size = 0;
	while (b[b_size].value)
		b_size++;
	if (b[0].value == 0)
		return ;
	else
		while (b[i].value && b[i].value != wanted)
			i++;
	j = b_size - i;
	if (i < j)
		while (i--)
			rb(b, ac);
	else
		while (j--)
			rrb(b, ac);
}

void	sort(int ac, char **av)
{
	t_stack	a[ac];
	t_stack	b[ac];
	t_limit	lim;
	int		j;

	j = ac;
	makelist(av, a, b, ac);
	if (ac == 3)
		sort_3(a);
	else if (ac == 5)
		sort_5(a, b);
	else
	{
		while (a[0].value)
		{
			lim = define_lim(ac);
			while (nbr_checker(a, lim))
			{
				push_top(a, lim, ac);
				pb(a, b, ac);
			}
		}
		while (j)
		{
			push_top_b(b, j, ac);
			pa(a, b, ac);
			j--;
		}
	}
}

// int i = 0;
// while (i < 10)
// {
//	 ft_putnbr_fd(a[i].nbr, 1);
//	 ft_putchar_fd(' ', 1);
//	 ft_putnbr_fd(b[i].nbr, 1);
//	 ft_putchar_fd('\n', 1);
//	 i++;
// }