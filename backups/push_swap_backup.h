#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct stack
{
	int nbr;
    int value;
}	stack;


void    makelist(char **nbrs, stack *a, stack *b);
void    makelist_simple(char **nbrs, int *a, int *b);

void    sort(int ac, char **av);
void    simplesort(int ac, char **av);

void	sort_3(int *a);
void	sort_5(int *a, int *b);
void    a_sort_5(int *a);           //work on names XD
void    sortidk(int *a, int size);

void    nullstack(stack c);

//operations:

void	sa(int *a);
void	sb(int *b);
void	ss(int *a, int *b);

void	pa(int *a, int *b, int size);
void	pb(int *a, int *b, int size);

void	ra(int *a, int size);
void	rb(int *b, int size);
void	rr(int *a, int *b, int size);

void	rra(int *a, int size);
void	rrb(int *b, int size);
void	rrr(int *a, int *b, int size);

//extra:

void    prints(int *a, int *b);

#endif