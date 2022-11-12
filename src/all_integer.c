/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:30:04 by rhong             #+#    #+#             */
/*   Updated: 2022/11/12 17:30:06 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	all_integer(char **data);
int	str_is_number(char *str);

int	all_integer(char **data)
{
	int	cnt;

	cnt = 0;
	while (data[cnt])
	{
		if (!str_is_number(data[cnt]))
			return (0);
		cnt++;
	}
	cnt = 0;
	while (data[cnt])
	{
		if (!str_number_is_integer(data[cnt]))
			return (0);
		cnt++;
	}
	return (1);
}

int	str_is_number(char *str)
{
	int	cnt;

	cnt = 0;
	if (str[cnt] == '-')
		cnt++;
	while (str[cnt])
	{
		if (!ft_isdigit(str[cnt]))
			return (0);
		cnt++;
	}
	return (1);
}
