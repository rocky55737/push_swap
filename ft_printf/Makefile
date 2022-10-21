# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhong <rhong@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 14:45:33 by rhong             #+#    #+#              #
#    Updated: 2022/07/07 19:43:27 by rhong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SRCS = ./ft_printf_libft.c ./ft_printf_hex.c ./ft_printf_putuint.c ./ft_printf.c ./ft_printf_ptr.c

HEADER = ft_printf.h

AR = ar
ARFLAGS = -rcs
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(AR) $(ARFLAGS) $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
