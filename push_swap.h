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

void	makelist(char **nbrs, t_stack *a, t_stack *b, int size);

void	sort(int ac, char **av);

void	sort_3(t_stack *a);
void	sort_5(t_stack *a, t_stack *b);
void	a_sort_5(t_stack *a);
void	sortidk(t_stack *a, int size);

t_stack	nullt_stack(t_stack c);
int		nbr_checker(t_stack *a, t_limit lim);
t_limit	define_lim(int ac);
void	push_top(t_stack *a, t_limit lim, int ac);

int		printerror(void);
int		inorder(int ac, char **av);

//operations:

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

//extra:

void	prints(int *a, int *b);
void	printst(t_stack *a, t_stack *b);

#endif
