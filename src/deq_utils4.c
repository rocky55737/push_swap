/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_utils4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:01:18 by rhong             #+#    #+#             */
/*   Updated: 2022/11/02 15:22:05 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	deq_get_index_big(t_node *deq, int index);
int	deq_get_index_small(t_node *deq, int index);

int	deq_get_index_big(t_node *deq, int index)
{
	int		ret;
	int		bigger_index;
	t_node	*tmp;

	if (!deq)
		return (-1);
	ret = 0;
	bigger_index = 30000;
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

int	deq_get_index_small(t_node *deq, int index)
{
	int		ret;
	int		smaller_index;
	t_node	*tmp;

	if (!deq)
		return (-1);
	ret = 0;
	smaller_index = -1;
	tmp = deq;
	while (tmp)
	{
		if (tmp->index < index && smaller_index < tmp->index)
		{
			smaller_index = tmp->index;
		}
		tmp = tmp->back;
	}
	tmp = deq;
	while (tmp->index != smaller_index)
	{
		ret++;
		tmp = tmp->back;
	}
	return (ret);
}
