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
int	string_input_err(char *input);
int	str_ptr_input_err(int input_num, char **input);

int	input_err(int ac, char **av)
{
	if (ac < 2)
	{
		write_err("push swap: more argument is required\n");
		return (1);
	}
	else if (ac == 2)
	{
		if (string_input_err(av[1]))
		{
			write_err("push swap: string input err\n");
			return (1);
		}
	}
	else
	{
		if (str_ptr_input_err(ac, av))
		{
			write_err("push swap: input err\n");
			return (1);
		}
	}
	return (0);
}

int	string_input_err(char *input)
{
	int		ret;
	int		cnt;
	char	**splited_input;
	char	**parsed_input;

	cnt = 0;
	if (!input[cnt])
		return (1);
	splited_input = ft_split(input, ' ');
	while (splited_input[cnt])
		cnt++;
	parsed_input = (char **)malloc(sizeof(char *) * (cnt + 2));
	parsed_input[0] = 0;
	cnt = 0;
	while (splited_input[cnt])
	{
		parsed_input[cnt + 1] = splited_input[cnt];
		cnt++;
	}
	parsed_input[cnt + 1] = 0;
	ret = str_ptr_input_err(cnt + 1, parsed_input);
	free_char_ptr_arr(splited_input);
	free(parsed_input);
	return (ret);
}

int	str_ptr_input_err(int input_num, char **input)
{
	int	input_cnt;
	int	str_cnt;

	input_cnt = 1;
	if (!input[input_cnt])
		return (1);
	while (input_cnt < input_num)
	{
		str_cnt = 0;
		if (input[input_cnt][str_cnt] && input[input_cnt][str_cnt] == '-')
			str_cnt++;
		while (input[input_cnt][str_cnt])
		{
			if (input[input_cnt][str_cnt] < '0' \
			|| input[input_cnt][str_cnt] > '9')
				return (1);
			str_cnt++;
		}
		input_cnt++;
	}
	return (0);
}
