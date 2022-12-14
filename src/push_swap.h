/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:36 by rhong             #+#    #+#             */
/*   Updated: 2022/11/12 18:06:37 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

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

void	push_swap(int ac, char **av);
t_node	*push_data_to_deq(int ac, char **av);

void	write_err(char	*err_msg);
void	malloc_null_guard(void *ptr);
int		str_ptr_len(char **str_ptr);
char	**str_ptr_dup_cat(char **dest, char **src);
char	**data_parsing(char **av, int ac);

int		input_err(int ac, char **av);
int		all_integer(char **data);
int		str_is_number(char *str);
int		str_number_is_integer(char *str);

t_node	*new_node(int data);
t_node	*deq_append_back(t_node *deq, t_node *new_node);
t_node	*deq_append_front(t_node *deq, t_node *new_node);
t_node	*deq_pop_head(t_node *deq);
t_node	*deq_pop_tail(t_node *deq);

t_node	*dup_node(t_node *t_node);
t_node	*head_move_to_tail(t_node *deq);
t_node	*tail_move_to_head(t_node *deq);
t_node	*swap_head_neck(t_node *deq);

int		deq_len(t_node *deq);
int		deq_get_data_by_index(t_node *deq, int index);
t_node	*deq_get_node_by_data(t_node *deq, int data);
int		deq_get_max_data(t_node *deq);
int		deq_get_min_data(t_node *deq);

int		deq_get_index_big(t_node *deq, int index);
int		deq_get_index_min(t_node *deq);
t_node	*deq_get_last_node(t_node *deq);

t_deqs	*dup_deqs(t_deqs *deqs);
void	free_deqs(t_deqs *deqs);

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

int		find_a_move_cnt(t_deqs *deqs, int b_data, int b_index);

void	free_char_ptr_arr(char **char_ptr_arr);

int		find_index_by_data(t_node *deq, int index);

int		get_least_move_data(t_deqs *deqs);

t_node	*set_index(t_node *deq);

t_deqs	*sort(t_deqs *deqs);
int		is_sorted(t_deqs *deqs, int total_len);

t_deqs	*sort_three(t_deqs	*deqs);
t_deqs	*sort_three_case_one(t_deqs	*deqs);
t_deqs	*sort_three_case_two(t_deqs *deqs);
t_deqs	*sort_three_case_three(t_deqs *deqs);

t_deqs	*sort_four(t_deqs *deqs);
t_deqs	*sort_four_case_one(t_deqs *deqs);
t_deqs	*sort_four_case_two(t_deqs *deqs);
t_deqs	*sort_four_case_three(t_deqs *deqs);
t_deqs	*sort_four_case_four(t_deqs *deqs);

t_deqs	*sort_five(t_deqs *deqs);
t_deqs	*sort_five_case_one(t_deqs *deqs);
t_deqs	*sort_five_case_two(t_deqs *deqs);
t_deqs	*sort_five_case_three(t_deqs *deqs);
t_deqs	*sort_five_case_four(t_deqs *deqs);
t_deqs	*sort_five_case_five(t_deqs *deqs);

t_deqs	*judging_move(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_one_one(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_one_two(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_two_one(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_two_two(t_deqs *deqs, int moving_data);

t_deqs	*many_sort(t_deqs *deqs);

t_deqs	*hard_sort(t_deqs *deqs);

#endif