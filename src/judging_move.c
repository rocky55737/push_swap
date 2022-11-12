/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   judging_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:41:58 by rhong             #+#    #+#             */
/*   Updated: 2022/11/12 18:07:07 by rhong            ###   ########.fr       */
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
	if (moving_data > deq_get_max_data(deqs->deq_a))
		deqs = judging_move_case_one_one(deqs, moving_data);
	else
		deqs = judging_move_case_one_two(deqs, moving_data);
	return (deqs);
}

t_deqs	*judging_move_case_two(t_deqs *deqs, int moving_data)
{
	if (moving_data > deq_get_max_data(deqs->deq_a))
		deqs = judging_move_case_two_one(deqs, moving_data);
	else
		deqs = judging_move_case_two_two(deqs, moving_data);
	return (deqs);
}
