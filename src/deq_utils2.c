/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:15:23 by rhong             #+#    #+#             */
/*   Updated: 2022/11/02 17:52:11 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*head_move_to_tail(t_node *deq);
t_node	*tail_move_to_head(t_node *deq);
t_node	*swap_head_neck(t_node *deq);
t_node	*dup_node(t_node *t_node);

t_node	*dup_node(t_node *src_node)
{
	t_node	*duped_node;

	if (!src_node)
		return (0);
	duped_node = (t_node *)malloc(sizeof(t_node));
	malloc_null_guard(duped_node);
	duped_node->front = src_node->front;
	duped_node->data = src_node->data;
	duped_node->index = src_node->index;
	duped_node->back = src_node->back;
	return (duped_node);
}

t_node	*head_move_to_tail(t_node *deq)
{
	t_node	*tmp;

	if (deq == 0)
		return (0);
	tmp = deq;
	deq = deq_append_back(deq, tmp);
	deq = deq_pop_head(deq);
	return (deq);
}

t_node	*tail_move_to_head(t_node *deq)
{
	t_node	*finder;

	if (deq == 0)
		return (0);
	finder = deq;
	while (finder->back != 0)
		finder = finder->back;
	deq = deq_append_front(deq, finder);
	deq = deq_pop_tail(deq);
	return (deq);
}

t_node	*swap_head_neck(t_node *deq)
{
	t_node	*tmp;

	if (deq == 0 || deq->back == 0)
		return (deq);
	tmp = deq->back;
	if (tmp->back)
		tmp->back->front = deq;
	deq->back = tmp->back;
	tmp->back = deq;
	deq->front = tmp;
	tmp->front = 0;
	return (tmp);
}
