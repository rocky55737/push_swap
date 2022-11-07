/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:15 by rhong             #+#    #+#             */
/*   Updated: 2022/11/07 16:12:15 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_deqs	*rra(t_deqs	*deqs);
t_deqs	*rrb(t_deqs	*deqs);
t_deqs	*rrr(t_deqs	*deqs);

t_deqs	*rra(t_deqs	*deqs)
{
	deqs->deq_a = tail_move_to_head(deqs->deq_a);
	return (deqs);
}

t_deqs	*rrb(t_deqs	*deqs)
{
	deqs->deq_b = tail_move_to_head(deqs->deq_b);
	return (deqs);
}

t_deqs	*rrr(t_deqs	*deqs)
{
	deqs->deq_a = tail_move_to_head(deqs->deq_a);
	deqs->deq_b = tail_move_to_head(deqs->deq_b);
	return (deqs);
}
