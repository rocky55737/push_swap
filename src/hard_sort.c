/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:59:38 by rhong             #+#    #+#             */
/*   Updated: 2022/11/04 17:59:41 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*hard_sort(t_deqs *deqs);

t_deqs	*hard_sort(t_deqs *deqs)
{
	int	len;

	len = deq_len(deqs->deq_a);
	if (len == 2)
		deqs = sa(deqs);
	else if (len == 3)
		deqs = sort_three(deqs);
	else if (len == 4)
		deqs = sort_four(deqs);
	else
		deqs = sort_five(deqs);
	return (deqs);
}
