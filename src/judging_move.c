/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   judging_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:41:58 by rhong             #+#    #+#             */
/*   Updated: 2022/11/09 19:03:59 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*judging_move(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_one(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_two(t_deqs *deqs, int moving_data);

t_deqs	*judging_move(t_deqs *deqs, int moving_data)
{
	if (find_index_by_data(deqs->deq_b, moving_data) <= \
	deq_len(deqs->deq_b) / 2)
		deqs = judging_move_case_one(deqs, moving_data);
	else
		deqs = judging_move_case_two(deqs, moving_data);
	return (deqs);
}

t_deqs	*judging_move_case_one(t_deqs *deqs, int moving_data)
{
	t_node	*tmp;

	tmp = deq_get_node_by_data(deqs->deq_b, moving_data);
	if (moving_data > deq_get_max_data(deqs->deq_a))
	{
		while (deq_get_index_min(deqs->deq_a) != 0 && \
		deqs->deq_b->data != moving_data)
		{
			if (deq_get_index_min(deqs->deq_a) <= deq_len(deqs->deq_a) / 2)
				deqs = rr(deqs);
		}
	}
	else
	{
		while (deq_get_index_big(deqs->deq_a, tmp->index) != 0 && \
		deqs->deq_b->data != moving_data)
		{
			if (deq_get_index_big(deqs->deq_a, tmp->index) <= \
			deq_len(deqs->deq_a) / 2)
				deqs = rr(deqs);
		}
	}
	return (deqs);
}

t_deqs	*judging_move_case_two(t_deqs *deqs, int moving_data)
{
	t_node	*tmp;

	tmp = deq_get_node_by_data(deqs->deq_b, moving_data);
	if (moving_data > deq_get_max_data(deqs->deq_a))
	{
		while (deq_get_index_min(deqs->deq_a) != 0 && \
		deqs->deq_b->data != moving_data)
		{
			if (deq_get_index_min(deqs->deq_a) > deq_len(deqs->deq_a) / 2)
				deqs = rrr(deqs);
		}
	}
	else
	{
		while (deq_get_index_big(deqs->deq_a, tmp->index) != 0 && \
		deqs->deq_b->data != moving_data)
		{
			if (deq_get_index_big(deqs->deq_a, tmp->index) > \
			deq_len(deqs->deq_a) / 2)
				deqs = rrr(deqs);
		}
	}
	return (deqs);
}
