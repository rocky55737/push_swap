/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_data_to_deq.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:16:50 by rhong             #+#    #+#             */
/*   Updated: 2022/11/12 17:37:09 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*push_data_to_deq(int ac, char **av);
t_node	*push_str_ptr_to_deq(char **datas);

t_node	*push_data_to_deq(int ac, char **av)
{
	t_node	*ret;
	char	**datas;

	datas = data_parsing(av, ac);
	ret = push_str_ptr_to_deq(datas);
	free_char_ptr_arr(datas);
	return (ret);
}

t_node	*push_str_ptr_to_deq(char **datas)
{
	int		cnt;
	t_node	*ret;
	t_node	*tmp;

	cnt = 0;
	while (datas[cnt])
	{
		if (cnt == 0)
			ret = new_node(ft_atoi(datas[cnt]));
		else
		{
			tmp = new_node(ft_atoi(datas[cnt]));
			ret = deq_append_back(ret, tmp);
			free(tmp);
		}
		cnt++;
	}
	return (ret);
}
