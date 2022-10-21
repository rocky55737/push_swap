/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:24 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 17:14:40 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int ac, char **av)
{
	t_deqs	*deqs;

	if (input_err(ac, av))
		exit(1);
	deqs->deq_a = push_data_to_deq(ac, av);
	deqs->deq_b = 0;
	deqs->deq_a = set_index(deqs->deq_a);
}
