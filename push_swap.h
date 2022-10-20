/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:30:06 by aappleto          #+#    #+#             */
/*   Updated: 2022/10/20 18:30:08 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct t_stack
{
	int	nbr;
	int	value;
}	t_stack;

typedef struct t_limit
{
	int	top;
	int	bot;
}	t_limit;

void	sort(int ac, char **av);
int		valid(int ac, char **av);

int		nbr_checker(t_stack *a, t_limit lim);
t_stack	nullt_stack(t_stack c);

//OPERATIONS:

void	ss(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);

void	pa(t_stack *a, t_stack *b, int size);
void	pb(t_stack *a, t_stack *b, int size);

void	rb(t_stack *b, int size);
void	ra(t_stack *a, int size);
void	rr(t_stack *a, t_stack *b, int size);

void	rra(t_stack *a, int size);
void	rrb(t_stack *b, int size);
void	rrr(t_stack *a, t_stack *b, int size);

//SRCS:

void	ft_sort_int_tab(int *array, int size);
void	copy_nbrs(t_stack *a, int *array, int size);
void	makelist(char **nbrs, t_stack *a, t_stack *b, int size);

t_limit	define_lim(int ac);
void	push_top(t_stack *a, t_limit lim, int ac);
void	push_top_b(t_stack *b, int wanted, int ac);

void	sortidk(t_stack *a, int size);
void	sort_3(t_stack *a);
void	a_sort_5(t_stack *a);
void	sort_5(t_stack *a, t_stack *b);

void	sort_small(int ac, t_stack *a, t_stack *b);
void	sort_big(int ac, t_stack *a, t_stack *b);

int		printerror(void);
int		inorder(int ac, char **av);

#endif
