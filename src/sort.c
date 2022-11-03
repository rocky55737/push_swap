/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:22:15 by rhong             #+#    #+#             */
/*   Updated: 2022/11/02 18:03:16 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*sort(t_deqs *deqs);
int		is_sorted(t_deqs *deqs, int total_len);

t_deqs	*sort(t_deqs *deqs)
{
	if (!is_sorted(deqs, deq_len(deqs->deq_a)))
	{
		if (deq_len(deqs->deq_a) < 6)
			deqs = hard_sort(deqs);
		else
			deqs = many_sort(deqs);
	}
	return (deqs);
}

int	is_sorted(t_deqs *deqs, int total_len)
{
	int		index;
	t_node	*tmp;

	index = 0;
	tmp = deqs->deq_a;
	while (tmp && index == tmp->index)
	{
		tmp = tmp->back;
		index++;
	}
	if (total_len != deqs)
	{
		return (0);
	}
	return (1);
}
