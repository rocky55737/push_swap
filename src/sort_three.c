/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:19:50 by rhong             #+#    #+#             */
/*   Updated: 2022/10/24 16:36:11 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*sort_three(t_deqs	*deqs);
t_deqs	*sort_three_case_one(t_deqs	*deqs);
t_deqs	*sort_three_case_two(t_deqs *deqs);
t_deqs	*sort_three_case_three(t_deqs *deqs);

t_deqs	*sort_three(t_deqs	*deqs)
{
	if (deqs->deq_a->data == deq_get_min_data(deqs->deq_a))
		deqs = sort_three_case_one(deqs);
	else if (deqs->deq_a->back->data == deq_get_min_data(deqs->deq_a))
		deqs = sort_three_case_two(deqs);
	else
		deqs = sort_three_case_three(deqs);
	return (deqs);
}

t_deqs	*sort_three_case_one(t_deqs	*deqs)
{
	if (deqs->deq_a->back->data == deq_get_max_data(deqs->deq_a))
	{
		deqs = rra(deqs);
		deqs = sa(deqs);
	}
	return (deqs);
}

t_deqs	*sort_three_case_two(t_deqs *deqs)
{
	if (deqs->deq_a->data == deq_get_max_data(deqs->deq_a))
		deqs = ra(deqs);
	else
		deqs = sa(deqs);
	return (deqs);
}

t_deqs	*sort_three_case_three(t_deqs *deqs)
{
	if (deqs->deq_a->data == deq_get_max_data(deqs->deq_a))
	{
		deqs = ra(deqs);
		deqs = sa(deqs);
	}
	else
		deqs = rra(deqs);
	return (deqs);
}
