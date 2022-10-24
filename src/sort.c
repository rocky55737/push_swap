/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:22:15 by rhong             #+#    #+#             */
/*   Updated: 2022/10/24 20:39:13 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*sort(t_deqs *deqs);

t_deqs	*sort(t_deqs *deqs)
{
	if (deq_len(deqs->deq_a) < 1)
		deqs = hard_sort(deqs);
	else
		deqs = many_sort(deqs);
	return (deqs);
}
