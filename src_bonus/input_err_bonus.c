/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_err_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:19 by rhong             #+#    #+#             */
/*   Updated: 2022/11/13 16:50:52 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	input_err(int ac, char **av);
int	no_repetition(char **datas);

int	input_err(int ac, char **av)
{
	char	**datas;

	if (ac < 2)
	{
		write_err("Error\n");
		return (1);
	}
	datas = data_parsing(av, ac);
	if (!all_integer(datas))
	{
		write_err("Error\n");
		free_char_ptr_arr(datas);
		return (1);
	}
	if (!no_repetition(datas))
	{
		write_err("Error\n");
		free_char_ptr_arr(datas);
		return (1);
	}
	free_char_ptr_arr(datas);
	return (0);
}

int	no_repetition(char **datas)
{
	int	cnt;
	int	ccnt;

	cnt = 0;
	while (datas[cnt])
	{
		ccnt = 0;
		while (datas[ccnt])
		{
			if (ccnt != cnt && ft_strcmp(datas[ccnt], datas[cnt]) == 0)
				return (0);
			ccnt++;
		}
		cnt++;
	}
	return (1);
}
