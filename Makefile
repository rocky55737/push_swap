# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhong <rhong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 22:23:30 by rhong             #+#    #+#              #
#    Updated: 2022/11/04 19:14:39 by rhong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = push_swap
NAME_B = checker
CFLAGS = -Wall -Wextra -Werror

SRCS = ./src/deq_utils.c ./src/deq_utils2.c ./src/deq_utils3.c ./src/deq_utils4.c ./src/find_move.c ./src/first_is_small_move.c ./src/free_char_ptr_arr.c ./src/hard_sort.c ./src/input_err.c ./src/main.c ./src/malloc_null_guard.c ./src/many_sort.c ./src/push_data_to_deq.c ./src/push_swap_utils.c ./src/push_swap_utils2.c ./src/push_swap_utils3.c ./src/push_swap.c ./src/set_index.c ./src/sort_five.c ./src/sort_five2.c ./src/sort_four.c ./src/sort_three.c ./src/sort.c ./src/write_err.c
SRCS_B = 

HEADER = ./src/push_swap.h
HEADER_B = ./src/

OBJS_B = $(SRCS_B:.c=.o)
OBJS = $(SRCS:.c=.o)

LIB = ./ft_printf/libftprintf.a ./libft/libft.a
LFLAG = -lftprintf -lft -L./ft_printf -L./libft

LIB_B = ./get_next_line/libgnl.a
LFLAG_B = -lgnl -L./get_next_line

ifdef WITH_BONUS
	TOTAL_OBJS = $(OBJS_B)
else
	TOTAL_OBJS = $(OBJS)
endif

all : $(NAME)

$(NAME): $(TOTAL_OBJS) $(LIB)
	$(CC) $(LFLAG) $(LIB) $(TOTAL_OBJS) -o $(NAME)

./obj/%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(LIB):
	make -j -C ./ft_printf; make bonus -j -C ./libft

clean :
	rm -rf $(OBJS) $(OBJS_B); make clean -C ./ft_printf; make clean -C ./libft; make clean -C ./get_next_line

fclean : clean
	rm -rf $(NAME) $(NAME_B) $(OBJS_B); make fclean -C ./ft_printf; make fclean -C ./libft; make fclean -C ./get_next_line

re :
	make fclean
	make all

bonus : $(OBJS_B) $(LIB) $(LIB_B)
	$(CC) $(LFLAG) $(LFLAG_B) $(LIB) $(LIB_B) $(OBJS_B) -o $(NAME_B)

$(LIB_B):
	make bonus -j -C ./get_next_line

.PHONY: all clean fclean re bonus