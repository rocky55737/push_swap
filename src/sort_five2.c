/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:58:33 by rhong             #+#    #+#             */
/*   Updated: 2022/11/04 17:58:39 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deqs	*sort_five_case_four(t_deqs *deqs);
t_deqs	*sort_five_case_five(t_deqs *deqs);

t_deqs	*sort_five_case_four(t_deqs *deqs)
{
	deqs = rra(deqs);
	deqs = sort_five_case_one(deqs);
	return (deqs);
}

t_deqs	*sort_five_case_five(t_deqs *deqs)
{
	deqs = rra(deqs);
	deqs = sort_five_case_four(deqs);
	return (deqs);
}
