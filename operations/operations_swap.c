/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:31:14 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 18:31:16 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
