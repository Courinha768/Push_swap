/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:31:04 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 18:31:05 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *a, int size)
{
	t_stack	first;
	int		i;

	write(1, "ra\n", 3);
	i = -1;
	first = a[0];
	while (++i < size - 1 && a[i + 1].value)
		a[i] = a[i + 1];
	a[i] = first;
}

void	rb(t_stack *b, int size)
{
	t_stack	first;
	int		i;

	write(1, "rb\n", 3);
	i = -1;
	first = b[0];
	while (++i < size - 1 && b[i + 1].value)
		b[i] = b[i + 1];
	b[i] = first;
}

void	rr(t_stack *a, t_stack *b, int size)
{
	ra(a, size);
	rb(b, size);
}
