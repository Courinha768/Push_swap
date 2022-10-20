/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:40:09 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 21:40:11 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small(int ac, t_stack *a, t_stack *b)
{
	if (ac == 2)
		sa(a);
	else if (ac == 3)
		sort_3(a);
	else if (ac == 4)
		sort_4(a, b);
	else if (ac == 5)
		sort_5(a, b);
}

void	sort_big(int ac, t_stack *a, t_stack *b)
{
	t_limit	lim;
	int		j;

	j = ac;
	while (a[0].value)
	{
		lim = define_lim(ac);
		while (nbr_checker(a, lim))
		{
			push_top_a(a, lim, ac);
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
