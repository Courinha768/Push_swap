/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:29:56 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 18:29:59 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	valid(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac < 1)
		return (0);
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
		{
			if (av[i][j] && (!(ft_isdigit(av[i][j]) || av[i][j] == '-')))
				return (printerror());
		}
	}
	return (1);
}

void	sort(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = (t_stack *)ft_calloc(sizeof(t_stack), ac + 1);
	b = (t_stack *)ft_calloc(sizeof(t_stack), ac + 1);
	makelist(av, a, b, ac);
	if (ac == 3 || ac == 5)
		sort_small(ac, a, b);
	else
		sort_big(ac, a, b);
	free(a);
	free(b);
}

int	main(int ac, char **av)
{
	ac -= 1;
	if (!valid(ac, av))
		return (0);
	if (inorder(ac, av))
		return (0);
	sort(ac, av);
	return (0);
}
