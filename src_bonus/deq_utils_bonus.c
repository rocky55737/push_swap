/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_utils_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:15:15 by rhong             #+#    #+#             */
/*   Updated: 2022/11/13 16:50:13 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_node	*new_node(int data);
t_node	*deq_append_back(t_node *deq, t_node *new_node);
t_node	*deq_append_front(t_node *deq, t_node *new_node);
t_node	*deq_pop_head(t_node *deq);
t_node	*deq_pop_tail(t_node *deq);

t_node	*new_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == 0)
	{
		write_err("Error\n");
		return (0);
	}
	new_node->data = data;
	new_node->index = 0;
	new_node->front = 0;
	new_node->back = 0;
	return (new_node);
}

t_node	*deq_append_back(t_node *deq, t_node *new_node)
{
	t_node	*finder;
	t_node	*tmp;

	if (new_node == 0 && deq == 0)
		return (0);
	if (new_node == 0)
		return (deq);
	tmp = dup_node(new_node);
	tmp->front = 0;
	tmp->back = 0;
	if (deq == 0)
		return (tmp);
	finder = deq;
	while (finder->back != 0)
		finder = finder->back;
	finder->back = tmp;
	tmp->front = finder;
	return (deq);
}

t_node	*deq_append_front(t_node *deq, t_node *new_node)
{
	t_node	*tmp;

	if (new_node == 0 && deq == 0)
		return (0);
	if (new_node == 0)
		return (deq);
	tmp = dup_node(new_node);
	tmp->front = 0;
	tmp->back = 0;
	if (deq == 0)
		return (tmp);
	tmp->back = deq;
	deq->front = tmp;
	return (tmp);
}

t_node	*deq_pop_head(t_node *deq)
{
	t_node	*tmp;

	if (deq->back == 0)
	{
		free(deq);
		return (0);
	}
	tmp = deq->back;
	tmp->front = 0;
	free(deq);
	return (tmp);
}

t_node	*deq_pop_tail(t_node *deq)
{
	t_node	*tmp;

	if (deq->back == 0)
	{
		free(deq);
		return (0);
	}
	tmp = deq;
	while (tmp->back != 0)
		tmp = tmp->back;
	tmp->front->back = 0;
	free(tmp);
	return (deq);
}
