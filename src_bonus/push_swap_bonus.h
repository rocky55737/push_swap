/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:11:53 by rhong             #+#    #+#             */
/*   Updated: 2022/11/07 16:11:54 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include "../get_next_line/get_next_line_bonus.h"

typedef struct s_node
{
	int				index;
	int				data;
	struct s_node	*front;
	struct s_node	*back;
}	t_node;

typedef struct s_deqs
{
	t_node	*deq_a;
	t_node	*deq_b;
}	t_deqs;

void	checker(int ac, char **av);

t_node	*new_node(int data);
t_node	*deq_append_back(t_node *deq, t_node *new_node);
t_node	*deq_append_front(t_node *deq, t_node *new_node);
t_node	*deq_pop_head(t_node *deq);
t_node	*deq_pop_tail(t_node *deq);
t_node	*head_move_to_tail(t_node *deq);
t_node	*tail_move_to_head(t_node *deq);
t_node	*swap_head_neck(t_node *deq);
t_node	*dup_node(t_node *t_node);
int		deq_len(t_node *deq);
int		deq_get_data_by_index(t_node *deq, int index);
t_node	*deq_get_node_by_data(t_node *deq, int data);
int		deq_get_max_data(t_node *deq);
int		deq_get_min_data(t_node *deq);
int		deq_get_index_big(t_node *deq, int index);
int		deq_get_index_min(t_node *deq);
t_node	*deq_get_last_node(t_node *deq);

t_deqs	*execute_command(t_deqs *deqs, char *command);
t_deqs	*do_execute(t_deqs *deqs, char *command);

void	free_char_ptr_arr(char **char_ptr_arr);

int		input_err(int ac, char **av);
int		string_input_err(char *input);
int		str_ptr_input_err(int input_num, char **input);

void	malloc_null_guard(void *ptr);

t_node	*push_data_to_deq(int ac, char **av);
t_node	*push_string_to_deq(char *str);
t_node	*push_str_ptr_to_deq(int ac, char **av);

t_deqs	*sa(t_deqs	*deqs);
t_deqs	*sb(t_deqs	*deqs);
t_deqs	*ss(t_deqs	*deqs);
t_deqs	*pa(t_deqs	*deqs);
t_deqs	*pb(t_deqs	*deqs);
t_deqs	*ra(t_deqs	*deqs);
t_deqs	*rb(t_deqs	*deqs);
t_deqs	*rr(t_deqs	*deqs);
t_deqs	*rra(t_deqs	*deqs);
t_deqs	*rrb(t_deqs	*deqs);
t_deqs	*rrr(t_deqs	*deqs);

t_node	*set_index(t_node *deq);
void	bubble_sort_data(int *datas, int len);

void	sort(t_deqs *deqs);
int		is_sorted(t_deqs *deqs, int total_len);

void	write_err(char	*err_msg);

#endif