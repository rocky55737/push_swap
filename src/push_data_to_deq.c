/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_data_to_deq.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:50 by rhong             #+#    #+#             */
/*   Updated: 2022/11/04 18:19:41 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*push_data_to_deq(int ac, char **av);
t_node	*push_string_to_deq(char *str);
t_node	*push_str_ptr_to_deq(int ac, char **av);

t_node	*push_data_to_deq(int ac, char **av)
{
	t_node	*ret;

	if (ac == 2)
		ret = push_string_to_deq(av[1]);
	else
		ret = push_str_ptr_to_deq(ac, av);
	return (ret);
}

t_node	*push_string_to_deq(char *str)
{
	char	**datas;
	int		datas_cnt;
	t_node	*ret;

	datas = ft_split(str, ' ');
	datas_cnt = 0;
	while (datas[datas_cnt])
	{
		if (datas_cnt == 0)
			ret = new_node(ft_atoi(datas[datas_cnt]));
		else
			ret = deq_append_back(ret, new_node(ft_atoi(datas[datas_cnt])));
		datas_cnt++;
	}
	datas_cnt = 0;
	while (datas[datas_cnt])
	{
		free(datas[datas_cnt]);
		datas_cnt++;
	}
	free(datas);
	return (ret);
}

t_node	*push_str_ptr_to_deq(int ac, char **av)
{
	int		cnt;
	t_node	*ret;

	cnt = 1;
	while (cnt < ac)
	{
		if (cnt == 1)
			ret = new_node(ft_atoi(av[cnt]));
		else
			ret = deq_append_back(ret, new_node(ft_atoi(av[cnt])));
		cnt++;
	}
	return (ret);
}
