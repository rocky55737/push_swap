/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   judging_move2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:59:32 by rhong             #+#    #+#             */
/*   Updated: 2022/11/12 18:06:18 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*judging_move_case_one_one(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_one_two(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_two_one(t_deqs *deqs, int moving_data);
t_deqs	*judging_move_case_two_two(t_deqs *deqs, int moving_data);

t_deqs	*judging_move_case_one_one(t_deqs *deqs, int moving_data)
{
	while (deq_get_index_min(deqs->deq_a) != 0 && \
	deqs->deq_b->data != moving_data)
	{
		if (deq_get_index_min(deqs->deq_a) <= deq_len(deqs->deq_a) / 2)
			deqs = rr(deqs);
		else
			return (deqs);
	}
	return (deqs);
}

t_deqs	*judging_move_case_one_two(t_deqs *deqs, int moving_data)
{
	t_node	*tmp;

	tmp = deq_get_node_by_data(deqs->deq_b, moving_data);
	while (deq_get_index_big(deqs->deq_a, tmp->index) != 0 && \
	deqs->deq_b->data != moving_data)
	{
		if (deq_get_index_big(deqs->deq_a, tmp->index) <= \
		deq_len(deqs->deq_a) / 2)
			deqs = rr(deqs);
		else
			return (deqs);
	}
	return (deqs);
}

t_deqs	*judging_move_case_two_one(t_deqs *deqs, int moving_data)
{
	while (deq_get_index_min(deqs->deq_a) != 0 && \
	deqs->deq_b->data != moving_data)
	{
		if (deq_get_index_min(deqs->deq_a) > deq_len(deqs->deq_a) / 2)
			deqs = rrr(deqs);
		else
			return (deqs);
	}
	return (deqs);
}

t_deqs	*judging_move_case_two_two(t_deqs *deqs, int moving_data)
{
	t_node	*tmp;

	tmp = deq_get_node_by_data(deqs->deq_b, moving_data);
	while (deq_get_index_big(deqs->deq_a, tmp->index) != 0 && \
	deqs->deq_b->data != moving_data)
	{
		if (deq_get_index_big(deqs->deq_a, tmp->index) > \
		deq_len(deqs->deq_a) / 2)
			deqs = rrr(deqs);
		else
			return (deqs);
	}
	return (deqs);
}
