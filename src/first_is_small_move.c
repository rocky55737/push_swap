/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_is_small_move.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:50:01 by rhong             #+#    #+#             */
/*   Updated: 2022/11/08 05:34:55 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	first_is_small_move(t_deqs *deqs)
{
	int		first_move;
	int		last_move;
	t_deqs	*dupped_deqs;

	dupped_deqs = dup_deqs(deqs);
	first_move = find_move_cnt(dupped_deqs);
	free_deqs(dupped_deqs);
	dupped_deqs = dup_deqs(deqs);
	dupped_deqs->deq_b = tail_move_to_head(dupped_deqs->deq_b);
	last_move = find_move_cnt(dupped_deqs);
	free_deqs(dupped_deqs);
	if (first_move <= last_move)
		return (1);
	else
		return (0);
}
