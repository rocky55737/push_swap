/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_parsing_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:30:11 by rhong             #+#    #+#             */
/*   Updated: 2022/11/13 16:50:05 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	**data_parsing(char **av, int ac)
{
	char	**data;
	char	**splitted;
	int		cnt;

	data = 0;
	cnt = 1;
	while (cnt < ac)
	{
		if (av[cnt][0] == 0)
		{
			write_err("Error\n");
			exit(1);
		}
		splitted = ft_split(av[cnt], ' ');
		data = str_ptr_dup_cat(data, splitted);
		cnt++;
	}
	return (data);
}
