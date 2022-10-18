#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct stack
{
	int nbr;
    int value;
}	stack;

typedef struct limit
{
	int top;
    int bot;
}	limit;

void    makelist(char **nbrs, stack *a, stack *b, int size);

void    sort(int ac, char **av);

void	sort_3(stack *a);
void	sort_5(stack *a, stack *b);
void    a_sort_5(stack *a);           //work on names XD
void    sortidk(stack *a, int size);

stack	nullstack(stack c);
int		nbr_checker(stack *a, limit lim);
limit	define_lim(int ac);
void    push_top(stack *a, limit lim, int ac);

//operations:

void	ss(stack *a, stack *b);
void	sa(stack *a);
void	sb(stack *b);

void	pa(stack *a, stack *b, int size);
void	pb(stack *a, stack *b, int size);

void	rb(stack *b, int size);
void	ra(stack *a, int size);
void	rr(stack *a, stack *b, int size);

void	rra(stack *a, int size);
void	rrb(stack *b, int size);
void	rrr(stack *a, stack *b, int size);

//extra:

void    prints(int *a, int *b);
void    printst(stack *a, stack *b);

#endif