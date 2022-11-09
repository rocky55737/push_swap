/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   many_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:28:28 by rhong             #+#    #+#             */
/*   Updated: 2022/11/09 19:21:57 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*many_sort(t_deqs *deqs);
t_deqs	*initialize_many_sort(t_deqs *deqs, int total_len);
t_deqs	*end_many_sort(t_deqs *deqs, int total_len);
t_deqs	*b_move(t_deqs *deqs, int moving_data);
t_deqs	*a_move(t_deqs *deqs, int moving_data, int moving_index);

t_deqs	*many_sort(t_deqs *deqs)
{
	int	total_len;
	int	moving_data;

	total_len = deq_len(deqs->deq_a);
	deqs = initialize_many_sort(deqs, total_len);
	while (deq_len(deqs->deq_b) != 0)
	{
		moving_data = get_least_move_data(deqs);
		deqs = judging_move(deqs, moving_data);
		deqs = b_move(deqs, moving_data);
		deqs = a_move(deqs, moving_data, deqs->deq_b->index);
		deqs = pa(deqs);
	}
	deqs = end_many_sort(deqs, total_len);
	return (deqs);
}

t_deqs	*initialize_many_sort(t_deqs *deqs, int total_len)
{
	while (deq_len(deqs->deq_a) != 5 + (total_len - 5) / 3)
	{
		if (deqs->deq_a->index > (total_len - 5) / 3 * 2 + 4)
		{
			deqs = pb(deqs);
			if (deq_len(deqs->deq_b) != 1)
				deqs = rb(deqs);
		}
		else if (deqs->deq_a->index > (total_len - 5) / 3 + 4)
			deqs = pb(deqs);
		else
			deqs = ra(deqs);
	}
	while (deq_len(deqs->deq_a) != 5)
		deqs = pb(deqs);
	deqs = sort_five(deqs);
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

t_deqs	*b_move(t_deqs *deqs, int moving_data)
{
	while (deqs->deq_b->data != moving_data)
	{
		if (find_index_by_data(deqs->deq_b, moving_data) <= \
		deq_len(deqs->deq_b) / 2)
			deqs = rb(deqs);
		else
			deqs = rrb(deqs);
	}
	return (deqs);
}

t_deqs	*a_move(t_deqs *deqs, int moving_data, int moving_index)
{
	if (moving_data > deq_get_max_data(deqs->deq_a))
	{
		while (deq_get_index_min(deqs->deq_a) != 0)
		{
			if (deq_get_index_min(deqs->deq_a) <= deq_len(deqs->deq_a) / 2)
				deqs = ra(deqs);
			else
				deqs = rra(deqs);
		}
	}
	else
	{
		while (deq_get_index_big(deqs->deq_a, moving_index) != 0)
		{
			if (deq_get_index_big(deqs->deq_a, moving_index) <= \
			deq_len(deqs->deq_a) / 2)
				deqs = ra(deqs);
			else
				deqs = rra(deqs);
		}
	}
	return (deqs);
}
