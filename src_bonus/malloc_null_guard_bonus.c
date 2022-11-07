/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_null_guard_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 03:55:43 by rhong             #+#    #+#             */
/*   Updated: 2022/11/07 16:11:44 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	malloc_null_guard(void *ptr)
{
	if (ptr == 0)
	{
		write_err("malloc null err\n");
		exit(1);
	}
}
