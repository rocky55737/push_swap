/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_data_to_deq.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:50 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 13:16:51 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*push_data_to_deq(int ac, char **av)
{
	t_node	*ret;

	if (ac == 2)
		ret = push_string_to_deq(av[1]);
	else
		ret = push_str_ptr_to_deq(ac, av);
}
