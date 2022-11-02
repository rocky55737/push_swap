/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_utils3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:15:52 by rhong             #+#    #+#             */
/*   Updated: 2022/11/02 16:13:55 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		deq_len(t_node *deq);
int		deq_get_data_by_index(t_node *deq, int index);
t_node	*deq_get_node_by_data(t_node *deq, int data);
int		deq_get_max_data(t_node *deq);
int		deq_get_min_data(t_node *deq);

int	deq_len(t_node *deq)
{
	int		cnt;
	t_node	*tmp;

	cnt = 0;
	tmp = deq;
	while (tmp)
	{
		cnt++;
		tmp = tmp->back;
	}
	return (cnt);
}

int	deq_get_data_by_index(t_node *deq, int index)
{
	int		cnt;
	t_node	*tmp;

	if (index >= deq_len(deq))
	{
		write_err("deq: out of range\n");
		exit(1);
	}
	cnt = 0;
	tmp = deq;
	while (cnt < index)
	{
		tmp = tmp->back;
		cnt++;
	}
	return (tmp->data);
}

t_node	*deq_get_node_by_data(t_node *deq, int data)
{
	t_node	*tmp;

	tmp = deq;
	while (tmp)
	{
		if (tmp->data == data)
			return (tmp);
		tmp = tmp->back;
	}
	return (0);
}

int	deq_get_max_data(t_node *deq)
{
	int	max;

	if (!deq)
		return (0);
	max = deq->data;
	while (deq)
	{
		if (max < deq->data)
			max = deq->data;
		deq = deq->back;
	}
	return (max);
}

int	deq_get_min_data(t_node *deq)
{
	int	min;

	if (!deq)
		return (0);
	min = deq->data;
	while (deq)
	{
		if (min > deq->data)
			min = deq->data;
		deq = deq->back;
	}
	return (min);
}
