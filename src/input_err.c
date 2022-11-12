/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:19 by rhong             #+#    #+#             */
/*   Updated: 2022/11/10 19:41:43 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_err(int ac, char **av);

int	input_err(int ac, char **av)
{
	char	**datas;

	if (ac < 2)
	{
		write_err("push swap: more argument is required\n");
		return (1);
	}
	datas = data_parsing(av, ac);
	if (!all_integer(datas))
	{
		write_err("push swap: argument is not integer\n");
		return (1);
	}
	if (!no_repetition(datas))
	{
		write_err("push swap: argument is duplicated\n");
		return (1);
	}
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
			if (ccnt != cnt && datas[ccnt] == datas[cnt])
				return (0);
			ccnt++;
		}
		cnt++;
	}
	return (1);
}
