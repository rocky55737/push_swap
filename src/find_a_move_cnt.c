/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_a_move_cnt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:50:13 by rhong             #+#    #+#             */
/*   Updated: 2022/11/11 17:32:52 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_a_move_cnt(t_deqs *deqs, int b_data, int b_index)
{
	if (b_data > deq_get_max_data(deqs->deq_a))
	{
		if (deq_get_index_min(deqs->deq_a) <= deq_len(deqs->deq_a) / 2)
			return (deq_get_index_min(deqs->deq_a));
		else
			return (deq_len(deqs->deq_a) - deq_get_index_min(deqs->deq_a));
	}
	else
	{
		if (deq_get_index_big(deqs->deq_a, b_index) <= deq_len(deqs->deq_a) / 2)
			return (deq_get_index_big(deqs->deq_a, b_index));
		else
			return (deq_len(deqs->deq_a) - deq_get_index_big(deqs->deq_a, b_index));
	}
}
