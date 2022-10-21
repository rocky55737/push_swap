/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_err.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:19 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 13:16:31 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_err(int ac, char **av);
int	string_input_err(char *input);
int	str_ptr_input_err(int input_num, char **input);

int	input_err(int ac, char **av)
{
	if (ac < 2)
	{
		write_err("push swap: more argument is required\n");
		return (1);
	}
	else if (ac == 2 && string_input_err(av[1]))
	{
		write_err("push swap: input err\n");
		return (1);
	}
	else if (str_ptr_input_err(ac, av))
	{
		write_err("push swap: input err\n");
		return (1);
	}
	return (0);
}

int	string_input_err(char *input)
{
	int	cnt;

	cnt = 0;
	if (input[cnt] >= '0' && input[cnt] <= '9')
	{
		while (input[cnt] && (input[cnt] >= '0' && input[cnt] <= '9') || input[cnt] == ' ')
			cnt++;
		if (input[cnt] == 0 && (input[cnt - 1] >= '0' && input[cnt - 1] <= '9'))
			return (0);
	}
	return (1);
}

int	str_ptr_input_err(int input_num, char **input)
{
	int	input_cnt;
	int	str_cnt;

	input_cnt = 1;
	while (input_cnt < input_num)
	{
		str_cnt = 0;
		while (input[input_cnt][str_cnt])
		{
			if (input[input_cnt][str_cnt] < '0' || input[input_cnt][str_cnt] > '9')
				return (1);
			str_cnt++;
		}
		input_cnt++;
	}
	return (0);
}
