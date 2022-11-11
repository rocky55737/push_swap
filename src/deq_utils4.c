/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_utils4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:01:18 by rhong             #+#    #+#             */
/*   Updated: 2022/11/11 17:48:15 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		deq_get_index_big(t_node *deq, int index);
int		deq_get_index_min(t_node *deq);
t_node	*deq_get_last_node(t_node *deq);

int	deq_get_index_big(t_node *deq, int index)
{
	int		ret;
	int		bigger_index;
	t_node	*tmp;

	if (!deq)
		return (-1);
	ret = 0;
	bigger_index = 2147483647;
	tmp = deq;
	while (tmp)
	{
		if (tmp->index > index && bigger_index > tmp->index)
		{
			bigger_index = tmp->index;
		}
		tmp = tmp->back;
	}
	tmp = deq;
	while (tmp->index != bigger_index)
	{
		ret++;
		tmp = tmp->back;
	}
	return (ret);
}

int	deq_get_index_min(t_node *deq)
{
	int		ret;
	int		min_index;
	t_node	*tmp;

	if (!deq)
		return (-1);
	ret = 0;
	min_index = deq_get_node_by_data(deq, deq_get_min_data(deq))->index;
	tmp = deq;
	while (tmp->index != min_index)
	{
		ret++;
		tmp = tmp->back;
	}
	return (ret);
}

t_node	*deq_get_last_node(t_node *deq)
{
	t_node	*tmp;

	if (!deq)
		return (0);
	tmp = deq;
	while (tmp->back)
		tmp = tmp->back;
	return (tmp);
}
