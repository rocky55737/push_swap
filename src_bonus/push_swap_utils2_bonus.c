/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:01 by rhong             #+#    #+#             */
/*   Updated: 2022/11/07 16:12:08 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_deqs	*ra(t_deqs	*deqs);
t_deqs	*rb(t_deqs	*deqs);
t_deqs	*rr(t_deqs	*deqs);

t_deqs	*ra(t_deqs	*deqs)
{
	deqs->deq_a = head_move_to_tail(deqs->deq_a);
	return (deqs);
}

t_deqs	*rb(t_deqs	*deqs)
{
	deqs->deq_b = head_move_to_tail(deqs->deq_b);
	return (deqs);
}

t_deqs	*rr(t_deqs	*deqs)
{
	deqs->deq_a = head_move_to_tail(deqs->deq_a);
	deqs->deq_b = head_move_to_tail(deqs->deq_b);
	return (deqs);
}
