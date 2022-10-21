/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:01 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 13:17:06 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node *deq[2]);
void	rb(t_node *deq[2]);
void	rr(t_node *deq[2]);

void	ra(t_node *deq[2])
{
	head_move_to_tail(deq[0]);
}

void	rb(t_node *deq[2])
{
	head_move_to_tail(deq[1]);
}

void	rr(t_node *deq[2])
{
	head_move_to_tail(deq[0]);
	head_move_to_tail(deq[1]);
}