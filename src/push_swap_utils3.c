/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:15 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 13:17:17 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node *deq[2]);
void	rrb(t_node *deq[2]);
void	rrr(t_node *deq[2]);

void	rra(t_node *deq[2])
{
	tail_move_to_head(deq[0]);
}

void	rrb(t_node *deq[2])
{
	tail_move_to_head(deq[1]);
}

void	rrr(t_node *deq[2])
{
	tail_move_to_head(deq[0]);
	tail_move_to_head(deq[1]);
}
