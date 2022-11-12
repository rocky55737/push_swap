/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:30:11 by rhong             #+#    #+#             */
/*   Updated: 2022/11/12 17:44:40 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**data_parsing(char **av, int ac)
{
	char	**data;
	char	**splitted;
	int		cnt;

	data = 0;
	cnt = 1;
	while (cnt < ac)
	{
		splitted = ft_split(av[cnt], ' ');
		data = str_ptr_dup_cat(data, splitted);
		cnt++;
	}
	return (data);
}
