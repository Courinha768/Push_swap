/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:31:22 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 18:31:24 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_stack *a)
{
	if (a[0].nbr > a[1].nbr && a[1].nbr < a[2].nbr && a[0].nbr < a[2].nbr)
		sa(a);
	else if (a[0].nbr > a[1].nbr && a[1].nbr < a[2].nbr && a[0].nbr > a[2].nbr)
		ra(a, 3);
	else if (a[0].nbr > a[1].nbr && a[1].nbr > a[2].nbr && a[0].nbr > a[2].nbr)
	{
		sa(a);
		rra(a, 3);
	}
	else if (a[0].nbr < a[1].nbr && a[1].nbr > a[2].nbr && a[0].nbr > a[2].nbr)
		rra(a, 3);
	else if (a[0].nbr < a[1].nbr && a[1].nbr > a[2].nbr && a[0].nbr < a[2].nbr)
	{
		sa(a);
		ra(a, 3);
	}
}

void	sort_4(t_stack *a, t_stack *b)
{
	pb(a, b, 4);
	sort_3(a);
	if (b[0].value < a[1].value && b[0].value > a[0].value)
		ra(a, 5);
	else if (b[0].value < a[2].value && b[0].value > a[1].value)
		rra(a, 5);
	pa(a, b, 5);
	sort_5final(a, 4);
}

void	sort_5final(t_stack *a, int size)
{
	int	i;

	i = 1;
	while (i < size && a[i - 1].value < a[i].value)
		i++;
	if (i == size)
		return ;
	if (i > size / 2)
	{
		i = size - i;
		while (i--)
			rra(a, size);
	}
	else
		while (i--)
			ra(a, size);
}

void	sort_5b(t_stack *a)
{
	int	i;

	i = 0;
	while (a[i].value < a[i + 1].value)
		i++;
	i += 1;
	if (i < 1)
		return ;
	if (i < 3)
		while (i--)
			ra(a, 5);
	else
	{
		i = 4 - i;
		while (i-- > 0)
			rra(a, 5);
	}	
}

void	sort_5(t_stack *a, t_stack *b)
{
	pb(a, b, 5);
	pb(a, b, 5);
	sort_3(a);
	if (b[0].value > b[1].value)
		sb(b);
	if (b[0].value < a[1].value && b[0].value > a[0].value)
		ra(a, 5);
	else if (b[0].value < a[2].value && b[0].value > a[1].value)
		rra(a, 5);
	pa(a, b, 5);
	if (b[0].value > a[0].value && b[0].value < a[1].value)
		ra(a, 5);
	else if (b[0].value > a[1].value && b[0].value < a[2].value)
		double_ra(a);
	else if (b[0].value > a[2].value && b[0].value < a[3].value)
		rra(a, 5);
	else if (b[0].value < a[0].value && b[0].value > a[3].value)
		ra(a, 5);
	else if (b[0].value > a[0].value && b[0].value > a[1].value)
		if (b[0].value > a[2].value && b[0].value > a[3].value)
			sort_5b(a);
	pa(a, b, 5);
	sort_5final(a, 5);
}
