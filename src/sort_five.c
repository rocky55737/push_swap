/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:59:02 by rhong             #+#    #+#             */
/*   Updated: 2022/11/04 17:59:05 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*sort_five(t_deqs *deqs);
t_deqs	*sort_five_case_one(t_deqs *deqs);
t_deqs	*sort_five_case_two(t_deqs *deqs);
t_deqs	*sort_five_case_three(t_deqs *deqs);

t_deqs	*sort_five(t_deqs *deqs)
{
	if (deq_get_index_min(deqs->deq_a) == 0)
		deqs = sort_five_case_one(deqs);
	else if (deq_get_index_min(deqs->deq_a) == 1)
		deqs = sort_five_case_two(deqs);
	else if (deq_get_index_min(deqs->deq_a) == 2)
		deqs = sort_five_case_three(deqs);
	else if (deq_get_index_min(deqs->deq_a) == 4)
		deqs = sort_five_case_four(deqs);
	else
		deqs = sort_five_case_five(deqs);
	return (deqs);
}

t_deqs	*sort_five_case_one(t_deqs *deqs)
{
	deqs = pb(deqs);
	deqs = sort_four(deqs);
	deqs = pa(deqs);
	return (deqs);
}

t_deqs	*sort_five_case_two(t_deqs *deqs)
{
	deqs = ra(deqs);
	deqs = sort_five_case_one(deqs);
	return (deqs);
}

t_deqs	*sort_five_case_three(t_deqs *deqs)
{
	deqs = ra(deqs);
	deqs = sort_five_case_two(deqs);
	return (deqs);
}
