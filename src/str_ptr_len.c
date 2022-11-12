/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_ptr_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:32:49 by rhong             #+#    #+#             */
/*   Updated: 2022/11/12 17:32:50 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_ptr_len(char **str_ptr);

int	str_ptr_len(char **str_ptr)
{
	int	len;

	len = 0;
	if (str_ptr != 0)
	{
		while (str_ptr[len])
			len++;
	}
	return (len);
}
