/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:40:01 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 21:40:02 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	printerror(void)
{
	write(2, "Error\n", 6);
	return (0);
}

int	inorder(int ac, char **av)
{
	int	i;
	int	*array;

	array = (int *)ft_calloc(sizeof(int), ac + 1);
	i = -1;
	while (av[++i + 1])
		array[i] = ft_atoi(av[i + 1]);
	i = 0;
	while (array[++i])
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
