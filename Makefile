# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhong <rhong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 22:23:30 by rhong             #+#    #+#              #
#    Updated: 2022/10/24 22:32:59 by rhong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror

SRCS = ./src/deq_utils.c ./src/deq_utils2.c ./src/deq_utils3.c ./src/deq_utils4.c ./src/input_err.c ./src/main.c ./src/many_sort.c ./src/push_data_to_deq.c ./src/push_swap_utils.c ./src/push_swap_utils2.c ./src/push_swap_utils3.c ./src/push_swap.c ./src/set_index.c ./src/sort_three.c ./src/sort.c ./src/write_err.c
SRCS_B = 

HEADER = ./src/push_swap.h
HEADER_B = ./src/

OBJS_B = $(SRCS_B:.c=.o)
OBJS = $(SRCS:.c=.o)

LIB = ./ft_printf/libftprintf.a ./libft/libft.a
LFLAG = -lftprintf -lft -L./ft_printf -L./libft

ifdef WITH_BONUS
	TOTAL_OBJS = $(OBJS_B)
else
	TOTAL_OBJS = $(OBJS)
endif

all : $(NAME) $(HEADER)

$(NAME): $(TOTAL_OBJS) $(LIB)
	$(CC) $(LFLAG) $(LIB) $(TOTAL_OBJS) -o $(NAME)

./obj/%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(LIB):
	make bonus -j -C ./ft_printf; make bonus -j -C ./libft

clean :
	rm -rf $(OBJS) $(OBJS_B); make clean -C ./ft_printf; make clean -C ./libft

fclean : clean
	rm -rf $(NAME) $(OBJS_B); make fclean -C ./ft_printf; make fclean -C ./libft

re :
	make fclean
	make all

bonus :
	make WITH_BONUS=1

.PHONY: all clean fclean re bonus