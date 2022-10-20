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
			if (av[i][j] && (!(ft_isdigit(av[i][j]) || av[i][j] == 45)))
				return (print_error());
			if (j != 0 && av[i][j] == 45)
				return (print_error());
		}
		if (av[i][0] == 45 && ft_strlen(av[i]) < 2)
			return (print_error());
	}
	i = duplicates(ac, av);
	if (!i)
		return (i);
	return (isint(av));
}

int	inorder(int ac, char **av)
{
	int	i;
	int	*array;

	array = (int *)ft_calloc(sizeof(int), ac + 1);
	i = -1;
	while (++i + 1 < ac + 1)
		array[i] = ft_atoi(av[i + 1]);
	i = 0;
	while (++i < ac)
	{
		if (array[i] < array[i - 1])
		{
			free(array);
			return (0);
		}
	}
	free(array);
	return (1);
}

void	sort(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = (t_stack *)ft_calloc(sizeof(t_stack), ac + 1);
	b = (t_stack *)ft_calloc(sizeof(t_stack), ac + 1);
	makelist(av, a, b, ac);
	if (ac > 1 && ac < 6)
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
