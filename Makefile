# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhong <rhong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 22:23:30 by rhong             #+#    #+#              #
#    Updated: 2022/11/13 17:36:04 by rhong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = push_swap
NAME_B = checker
CFLAGS = -Wall -Wextra -Werror

SRCS = ./src/all_integer.c ./src/data_parsing.c ./src/deq_utils.c ./src/deq_utils2.c ./src/deq_utils3.c ./src/deq_utils4.c ./src/deq_utils5.c ./src/find_a_move_cnt.c ./src/find_index_by_data.c ./src/free_char_ptr_arr.c ./src/get_least_move_data.c ./src/hard_sort.c ./src/input_err.c ./src/judging_move.c ./src/judging_move2.c ./src/main.c ./src/malloc_null_guard.c ./src/many_sort.c ./src/push_data_to_deq.c ./src/push_swap_utils.c ./src/push_swap_utils2.c ./src/push_swap_utils3.c ./src/push_swap.c ./src/set_index.c ./src/sort_five.c ./src/sort_five2.c ./src/sort_four.c ./src/sort_three.c ./src/sort.c ./src/str_number_is_integer.c ./src/str_ptr_dup_cat.c ./src/str_ptr_len.c ./src/write_err.c
SRCS_B = ./src_bonus/all_integer_bonus.c ./src_bonus/data_parsing_bonus.c ./src_bonus/checker_bonus.c ./src_bonus/deq_utils_bonus.c ./src_bonus/deq_utils2_bonus.c ./src_bonus/deq_utils3_bonus.c ./src_bonus/deq_utils4_bonus.c ./src_bonus/execute_command_bonus.c ./src_bonus/free_char_ptr_arr_bonus.c ./src_bonus/input_err_bonus.c ./src_bonus/main_bonus.c ./src_bonus/malloc_null_guard_bonus.c ./src_bonus/push_data_to_deq_bonus.c ./src_bonus/push_swap_utils_bonus.c ./src_bonus/push_swap_utils2_bonus.c ./src_bonus/push_swap_utils3_bonus.c ./src_bonus/set_index_bonus.c ./src_bonus/sort_bonus.c ./src_bonus/str_number_is_integer_bonus.c ./src_bonus/str_ptr_dup_cat_bonus.c ./src_bonus/str_ptr_len_bonus.c ./src_bonus/trim_nl_bonus.c ./src_bonus/write_err_bonus.c

HEADER = ./src/push_swap.h
HEADER_B = ./src/push_swap_bonus.h

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

bonus :
	make $(NAME_B) WITH_BONUS=1

$(NAME_B): $(TOTAL_OBJS) $(LIB) $(LIB_B)
	$(CC) $(LFLAG) $(LFLAG_B) $(LIB) $(LIB_B) $(TOTAL_OBJS) -o $(NAME_B)

./obj/%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(LIB):
	make -j -C ./ft_printf; make bonus -j -C ./libft

$(LIB_B):
	make bonus -j -C ./get_next_line

clean :
	rm -rf $(OBJS) $(OBJS_B); make clean -C ./ft_printf; make clean -C ./libft; make clean -C ./get_next_line

fclean : clean
	rm -rf $(NAME) $(NAME_B) $(OBJS_B); make fclean -C ./ft_printf; make fclean -C ./libft; make fclean -C ./get_next_line

re :
	make fclean
	make all
	make bonus

.PHONY: all clean fclean re bonus