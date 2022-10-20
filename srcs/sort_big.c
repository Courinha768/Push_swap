/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:40:20 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 21:40:21 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_limit	define_lim(int ac)
{
	static int	i = 0;
	int			chunk_nbr;
	t_limit		lim;

	if (ac < 101)
		chunk_nbr = 6;
	else
		chunk_nbr = 14;
	lim.bot = ((ac / chunk_nbr) * i) + 1;
	lim.top = ((ac / chunk_nbr) * (i + 1));
	i++;
	return (lim);
}

void	push_top(t_stack *a, t_limit lim, int ac)
{
	int	i;
	int	j;

	i = 0;
	j = ac;
	while (a[i].value < lim.bot || a[i].value > lim.top)
		i++;
	while (a[j].value < lim.bot || a[j].value > lim.top)
		j--;
	j = ac - j;
	if (i < j)
		while (a[0].value < lim.bot || a[0].value > lim.top)
			ra(a, ac);
	else
		while (a[0].value < lim.bot || a[0].value > lim.top)
			rra(a, ac);
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
