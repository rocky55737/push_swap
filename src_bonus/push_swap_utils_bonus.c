/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:56 by rhong             #+#    #+#             */
/*   Updated: 2022/11/04 18:06:58 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_deqs	*sa(t_deqs	*deqs);
t_deqs	*sb(t_deqs	*deqs);
t_deqs	*ss(t_deqs	*deqs);
t_deqs	*pa(t_deqs	*deqs);
t_deqs	*pb(t_deqs	*deqs);

t_deqs	*sa(t_deqs	*deqs)
{
	deqs->deq_a = swap_head_neck(deqs->deq_a);
	return (deqs);
}

t_deqs	*sb(t_deqs	*deqs)
{
	deqs->deq_b = swap_head_neck(deqs->deq_b);
	return (deqs);
}

t_deqs	*ss(t_deqs	*deqs)
{
	deqs->deq_a = swap_head_neck(deqs->deq_a);
	deqs->deq_b = swap_head_neck(deqs->deq_b);
	return (deqs);
}

t_deqs	*pa(t_deqs	*deqs)
{
	if (deqs->deq_b)
	{
		deqs->deq_a = deq_append_front(deqs->deq_a, deqs->deq_b);
		deqs->deq_b = deq_pop_head(deqs->deq_b);
	}
	return (deqs);
}

t_deqs	*pb(t_deqs	*deqs)
{
	if (deqs->deq_a)
	{
		deqs->deq_b = deq_append_front(deqs->deq_b, deqs->deq_a);
		deqs->deq_a = deq_pop_head(deqs->deq_a);
	}
	return (deqs);
}
