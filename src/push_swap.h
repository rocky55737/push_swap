/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:36 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 17:07:48 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int		index;
	int		data;
	t_node	*front;
	t_node	*back;
}	t_node;

void	write_err(char	*err_msg);

int		input_err(int ac, char **av);

t_node	*new_node(int data);
t_node	*deq_append_back(t_node *deq, t_node *new_node);
t_node	*deq_append_front(t_node *deq, t_node *new_node);
t_node	*deq_pop_head(t_node *deq);
t_node	*deq_pop_tail(t_node *deq);

t_node	*head_move_to_tail(t_node *deq);
t_node	*tail_move_to_head(t_node *deq);
t_node	*swap_head_neck(t_node *deq);
t_node	*head_dup_to_other_head(t_node *deq_s, t_node *deq_d);

int		deq_len(t_node *deq);
int		deq_get_data_by_index(t_node *deq, int index);
t_node	*deq_get_node_by_data(t_node *deq, int data);

void	sa(t_node *deq[2]);
void	sb(t_node *deq[2]);
void	ss(t_node *deq[2]);
void	pa(t_node *deq[2]);
void	pb(t_node *deq[2]);
void	ra(t_node *deq[2]);
void	rb(t_node *deq[2]);
void	rr(t_node *deq[2]);
void	rra(t_node *deq[2]);
void	rrb(t_node *deq[2]);
void	rrr(t_node *deq[2]);

t_node	*set_index(t_node *deq);

#endif