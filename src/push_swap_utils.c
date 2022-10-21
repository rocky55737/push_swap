/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:56 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 13:16:58 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node *deq[2]);
void	sb(t_node *deq[2]);
void	ss(t_node *deq[2]);
void	pa(t_node *deq[2]);
void	pb(t_node *deq[2]);

void	sa(t_node *deq[2])
{
	swap_head_neck(deq[0]);
}

void	sb(t_node *deq[2])
{
	swap_head_neck(deq[1]);
}

void	ss(t_node *deq[2])
{
	swap_head_neck(deq[0]);
	swap_head_neck(deq[1]);
}

void	pa(t_node *deq[2])
{
	if (deq[1])
	{
		deq_append_front(deq[0], deq[1]);
		deq_pop_head(deq[1]);
	}
}

void	pb(t_node *deq[2])
{
	if (deq[0])
	{
		deq_append_front(deq[1], deq[0]);
		deq_pop_head(deq[0]);
	}
}
