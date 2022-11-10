/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_least_move_data.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:01:55 by rhong             #+#    #+#             */
/*   Updated: 2022/11/10 20:03:57 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_least_move_data(t_deqs *deqs);
int	*get_move_cnts(t_deqs *deqs);

int	get_least_move_data(t_deqs *deqs)
{
	int		*move_cnts;
	int		b_len;
	int		index;
	int		min_move;
	t_node	*tmp;

	move_cnts = get_move_cnts(deqs);
	min_move = 200000000;
	b_len = deq_len(deqs->deq_b);
	index = 0;
	while (index < b_len)
	{
		if (min_move > move_cnts[index])
			min_move = move_cnts[index];
		index++;
	}
	index = 0;
	tmp = deqs->deq_b;
	while (index < b_len && move_cnts[index] != min_move)
	{
		tmp = tmp->back;
		index++;
	}
	free(move_cnts);
	return (tmp->data);
}

int	*get_move_cnts(t_deqs *deqs)
{
	int		b_len;
	int		*move_cnts;
	int		index;
	t_node	*tmp;

	b_len = deq_len(deqs->deq_b);
	move_cnts = (int *)malloc(sizeof(int) * b_len);
	malloc_null_guard(move_cnts);
	index = 0;
	tmp = deqs->deq_b;
	while (index < b_len)
	{
		if (index <= b_len / 2)
		{
			move_cnts[index] = index;
			move_cnts[index] += find_a_move_cnt(deqs, tmp->data, tmp->index);
		}
		else
		{
			move_cnts[index] = b_len - index;
			move_cnts[index] += find_a_move_cnt(deqs, tmp->data, tmp->index);
		}
		index++;
		tmp = tmp->back;
	}
	return (move_cnts);
}
