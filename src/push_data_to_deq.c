/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_data_to_deq.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:50 by rhong             #+#    #+#             */
/*   Updated: 2022/11/04 19:15:24 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*push_data_to_deq(int ac, char **av);

t_node	*push_data_to_deq(int ac, char **av)
{
	t_node	*ret;
	char	**datas;

	datas = data_parsing(av, ac);
	ret = push_str_ptr_to_deq(ac, av);
	return (ret);
}

t_node	*push_str_ptr_to_deq(char **datas)
{
	int		cnt;
	t_node	*ret;

	cnt = 0;
	while (datas[cnt])
	{
		if (cnt == 0)
			ret = new_node(ft_atoi(av[cnt]));
		else
			ret = deq_append_back(ret, new_node(ft_atoi(av[cnt])));
		cnt++;
	}
	return (ret);
}
