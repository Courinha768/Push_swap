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

#include "../push_swap.h"

int	print_error(void)
{
	write(2, "Error\n", 6);
	return (0);
}

int	duplicates(int ac, char **av)
{
	int	i;
	int	*array;

	array = (int *)ft_calloc(sizeof(int), ac + 1);
	i = -1;
	while (av[++i + 1])
		array[i] = ft_atoi(av[i + 1]);
	i = 0;
	ft_sort_int_tab(array, ac);
	while (array[++i])
	{
		if (array[i] == array[i - 1])
		{
			free(array);
			return (print_error());
		}
	}
	free(array);
	return (1);
}

int	cut_str(char *str, int start)
{
	int		i;
	int		size;
	char	*array;

	i = start - 1;
	size = ft_strlen(str);
	array = (char *)ft_calloc(sizeof(char), size);
	while (str[++i])
		array[i - start] = str[i];
	i = ft_atoi(array);
	free(array);
	return (i);
}

int	isint(char **av)
{
	int		i;

	i = 0;
	while (av[++i])
	{
		if (av[i][0] != 45 && ft_strlen(av[i]) > 10)
			return (print_error());
		else if (av[i][0] == 45 && ft_strlen(av[i]) > 11)
			return (print_error());
		if (av[i][0] != 45 && ft_strlen(av[i]) == 10 && av[i][0] > 1)
		{
			if (av[i][0] == 50 && cut_str(av[i], 1) > 147483647)
				return (print_error());
		}
		else if (av[i][0] == 45 && ft_strlen(av[i]) == 11 && av[i][0] > 1)
		{
			if (av[i][1] == 50 && cut_str(av[i], 2) > 147483648)
				return (print_error());
		}
	}
	return (1);
}
