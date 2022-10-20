/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makelists.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:30:25 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 18:30:26 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_int_tab(int *array, int size)
{
	int	i;
	int	j;
	int	a;

	j = -1;
	a = 0;
	while (++j < size)
	{
		i = -1;
		while (++i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				a = array[i + 1];
				array[i + 1] = array[i];
				array[i] = a;
			}
		}
	}
}

void	copy_nbrs(t_stack *a, int *array, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		array[i] = a[i].nbr;
}

void	makelist(char **nbrs, t_stack *a, t_stack *b, int size)
{
	int	i;
	int	j;
	int	*array;

	array = (int *)ft_calloc(sizeof(int), size + 1);
	i = -1;
	j = -1;
	while (nbrs[++i + 1])
	{
		a[i].nbr = ft_atoi(nbrs[i + 1]);
		b[i].nbr = 0;
		b[i].value = 0;
	}
	copy_nbrs(a, array, size);
	ft_sort_int_tab(array, size);
	while (++j < size)
	{
		i = 0;
		while (a[i].nbr != array[j])
			i++;
		a[i].value = j + 1;
	}
	free(array);
}
