/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:56 by rhong             #+#    #+#             */
/*   Updated: 2022/10/25 08:31:11 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*sa(t_deqs	*deqs);
t_deqs	*sb(t_deqs	*deqs);
t_deqs	*ss(t_deqs	*deqs);
t_deqs	*pa(t_deqs	*deqs);
t_deqs	*pb(t_deqs	*deqs);

t_deqs	*sa(t_deqs	*deqs)
{
	deqs->deq_a = swap_head_neck(deqs->deq_a);
	//ft_printf("sa\n");
	return (deqs);
}

t_deqs	*sb(t_deqs	*deqs)
{
	deqs->deq_b = swap_head_neck(deqs->deq_b);
	//ft_printf("sb\n");
	return (deqs);
}

t_deqs	*ss(t_deqs	*deqs)
{
	deqs->deq_a = swap_head_neck(deqs->deq_a);
	deqs->deq_b = swap_head_neck(deqs->deq_b);
	ft_printf("ss\n");
	return (deqs);
}

t_deqs	*pa(t_deqs	*deqs)
{
	if (deqs->deq_b)
	{
		deqs->deq_a = deq_append_front(deqs->deq_a, deqs->deq_b);
		deq_pop_head(deqs->deq_b);
		//ft_printf("pa\n");
	}
	return (deqs);
}

t_deqs	*pb(t_deqs	*deqs)
{
	if (deqs->deq_a)
	{
		deqs->deq_b = deq_append_front(deqs->deq_b, deqs->deq_a);
		deq_pop_head(deqs->deq_a);
		//ft_printf("pb\n");
	}
	return (deqs);
}
