/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   many_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:28:28 by rhong             #+#    #+#             */
/*   Updated: 2022/10/25 09:04:41 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*many_sort(t_deqs *deqs)
{
	int	total_len;

	total_len = deq_len(deqs->deq_a);
	ft_printf("%d\n", total_len);
	while (deq_len(deqs->deq_a) != 3 + (total_len - 3) / 3)
	{
		if (deqs->deq_a->index > (total_len - 3) / 3 * 2 + 3)
		{
			deqs = pb(deqs);
			deqs = rb(deqs);
		}
		else if (deqs->deq_a->index > (total_len - 3) / 3 + 3)
			deqs = pb(deqs);
		else
			deqs = ra(deqs);
	}
	ft_printf("OK\n");
	while (deq_len(deqs->deq_a) != 3)
		deqs = pb(deqs);
	deqs = sort_three(deqs);

	ft_printf("OK\n");
	while (deq_len(deqs->deq_b) != 0)
	{
		if (deqs->deq_b->data > deq_get_max_data(deqs->deq_a))
		{
			while (deqs->deq_a->data != deq_get_max_data(deqs->deq_a))
			{
				if (deq_len(deqs->deq_a) / 2 > deq_get_node_by_data(deqs->deq_a, deq_get_max_data(deqs->deq_a))->index)
					deqs = ra(deqs);
				else
					deqs = rra(deqs);
			}	
		}
		else if (deqs->deq_b->data < deq_get_min_data(deqs->deq_a))
		{
			while (deqs->deq_a->data != deq_get_min_data(deqs->deq_a))
			{
				if (deq_len(deqs->deq_a) / 2 > deq_get_node_by_data(deqs->deq_a, deq_get_min_data(deqs->deq_a))->index)
					deqs = ra(deqs);
				else
					deqs = rra(deqs);
			}
		}
		else
		{
			while (deq_get_index_big(deqs->deq_a, deqs->deq_b->index) != 0)
			{
				if (deq_len(deqs->deq_a) / 2 > deq_get_index_big(deqs->deq_a, deqs->deq_b->index))
					deqs = ra(deqs);
				else
					deqs = rra(deqs);
			}
		}
		deqs = pa(deqs);
	}
	ft_printf("OK\n");
	while (deqs->deq_a->index != 0)
	{
		if (deqs->deq_a->index < total_len / 2)
			deqs = ra(deqs);
		else
			deqs = rra(deqs);
	}
	ft_printf("OK\n");
	return (deqs);
}
