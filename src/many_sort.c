/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   many_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:28:28 by rhong             #+#    #+#             */
/*   Updated: 2022/11/04 19:53:41 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*many_sort(t_deqs *deqs);
t_deqs	*initialize_many_sort(t_deqs *deqs, int total_len);
t_deqs	*end_many_sort(t_deqs *deqs, int total_len);
t_deqs	*sort_first(t_deqs *deqs);
t_deqs	*sort_last(t_deqs *deqs);

t_deqs	*many_sort(t_deqs *deqs)
{
	int	total_len;

	total_len = deq_len(deqs->deq_a);
	deqs = initialize_many_sort(deqs, total_len);

	while (deq_len(deqs->deq_b) != 0)
	{
		if (first_is_small_move(deqs))
			deqs = sort_first(deqs);
		else
			deqs = sort_last(deqs);
		deqs = pa(deqs);
	}

	deqs = end_many_sort(deqs, total_len);
	return (deqs);
}

t_deqs	*initialize_many_sort(t_deqs *deqs, int total_len)
{
	while (deq_len(deqs->deq_a) != 3 + (total_len - 3) / 3)
	{
		if (deqs->deq_a->index > (total_len - 3) / 3 * 2 + 2)
		{
			deqs = pb(deqs);
			deqs = rb(deqs);
		}
		else if (deqs->deq_a->index > (total_len - 3) / 3 + 2)
			deqs = pb(deqs);
		else
			deqs = ra(deqs);
	}
	while (deq_len(deqs->deq_a) != 3)
		deqs = pb(deqs);
	deqs = sort_three(deqs);
	return (deqs);
}

t_deqs	*end_many_sort(t_deqs *deqs, int total_len)
{
	while (deqs->deq_a->index != 0)
	{
		if (deqs->deq_a->index < total_len / 2)
			deqs = rra(deqs);
		else
			deqs = ra(deqs);
	}
	return (deqs);
}

t_deqs	*sort_first(t_deqs *deqs)
{
	if (deqs->deq_b->data > deq_get_max_data(deqs->deq_a))
	{
		while (deq_get_index_min(deqs->deq_a) != 0)
		{
			if (deq_len(deqs->deq_a) / 2 > deq_get_index_min(deqs->deq_a))
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
	return (deqs);
}

t_deqs	*sort_last(t_deqs *deqs)
{
	deqs = rrb(deqs);
	deqs = sort_first(deqs);
	return (deqs);
}
