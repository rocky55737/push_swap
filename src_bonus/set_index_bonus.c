/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:48 by rhong             #+#    #+#             */
/*   Updated: 2022/10/25 09:02:34 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_node	*set_index(t_node *deq);
void	bubble_sort_data(int *datas, int len);

t_node	*set_index(t_node *deq)
{
	int		len;
	int		*datas;
	int		cnt;
	t_node	*tmp;

	len = deq_len(deq);
	datas = (int *)malloc(sizeof(int) * len);
	cnt = 0;
	while (cnt < len)
	{
		datas[cnt] = deq_get_data_by_index(deq, cnt);
		cnt++;
	}
	bubble_sort_data(datas, len);
	tmp = deq;
	while (tmp)
	{
		cnt = 0;
		while (tmp->data != datas[cnt])
			cnt++;
		tmp->index = cnt;
		tmp = tmp->back;
	}
	free(datas);
	return (deq);
}

void	bubble_sort_data(int *datas, int len)
{
	int	cnt;
	int	ccnt;
	int	tmp;

	cnt = 0;
	while (cnt < len - 1)
	{
		ccnt = 0;
		while (ccnt < len - cnt - 1)
		{
			if (datas[ccnt] > datas[ccnt + 1])
			{
				tmp = datas[ccnt];
				datas[ccnt] = datas[ccnt + 1];
				datas[ccnt + 1] = tmp;
			}
			ccnt++;
		}
		cnt++;
	}
}
