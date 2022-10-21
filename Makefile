# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aappleto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 16:16:22 by aappleto          #+#    #+#              #
#    Updated: 2022/10/21 16:16:25 by aappleto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = ./libft/libft.a
LIBFT_NAME = libft.a

SRCS = srcs/makelists.c srcs/sort_big.c srcs/sort_small.c srcs/sort.c srcs/valid.c
OPER = operations/operations_push.c operations/operations_reverse_rotate.c operations/operations_rotate.c operations/operations_swap.c
FUNC = push_swap.c push_swap_utils.c
		
FLAGS = -Wall -Wextra -Werror

OBJS_S = $(SRCS:.c=.o)$(NAME)
OBJS_O = operations_push.o operations_reverse_rotate.o operations_rotate.o operations_swap.o
OBJS_F = push_swap.o push_swap_utils.o

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(LIBFT_NAME)
	gcc $(FLAGS) -o $(NAME) $(SRCS) $(OPER) $(FUNC) $(LIBFT)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(LIBFT_NAME)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)
	rm -rf $(LIBFT_NAME)

re : fclean all
