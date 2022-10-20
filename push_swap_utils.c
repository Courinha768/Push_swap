/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:30:15 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 18:30:16 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	nullt_stack(t_stack c)
{
	c.nbr = 0;
	c.value = 0;
	return (c);
}

int	nbr_checker(t_stack *a, t_limit lim)
{
	int	i;

	i = -1;
	while (a[++i].value)
		if (a[i].value >= lim.bot && a[i].value <= lim.top)
			return (1);
	return (0);
}

void	double_ra(t_stack *a)
{
	ra(a, 5);
	ra(a, 5);
}
