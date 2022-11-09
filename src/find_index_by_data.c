/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index_by_data.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:54:06 by rhong             #+#    #+#             */
/*   Updated: 2022/11/09 18:24:30 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index_by_data(t_node *deq, int data)
{
	int	loc;

	loc = 0;
	while (deq)
	{
		if (deq->data == data)
			return (loc);
		loc++;
		deq = deq->back;
	}
	return (-1);
}
