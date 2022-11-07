/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_utils5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:51:27 by rhong             #+#    #+#             */
/*   Updated: 2022/11/07 21:40:16 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*dup_deqs(t_deqs *deqs);
void	free_deqs(t_deqs *deqs);

t_deqs	*dup_deqs(t_deqs *deqs)
{
	t_deqs	*dupped_deq;
	t_node	*tmp;

	dupped_deq = (t_deqs *)malloc(sizeof(t_deqs));
	malloc_null_guard(dupped_deq);
	dupped_deq->deq_a = 0;
	dupped_deq->deq_b = 0;
	tmp = deqs->deq_a;
	while (tmp)
	{
		dupped_deq->deq_a = deq_append_back(dupped_deq->deq_a, tmp);
		tmp = tmp->back;
	}
	tmp = deqs->deq_b;
	while (tmp)
	{
		dupped_deq->deq_b = deq_append_back(dupped_deq->deq_b, tmp);
		tmp = tmp->back;
	}
	return (dupped_deq);
}

void	free_deqs(t_deqs *deqs)
{
	while (deqs->deq_a)
		deqs->deq_a = deq_pop_head(deqs->deq_a);
	while (deqs->deq_b)
		deqs->deq_b = deq_pop_head(deqs->deq_b);
	free(deqs);
}
