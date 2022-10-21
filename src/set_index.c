/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:17:48 by rhong             #+#    #+#             */
/*   Updated: 2022/10/21 17:06:59 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*set_index(t_node *deq);
void	bubble_sort_data(int *datas, int len);

t_node	*set_index(t_node *deq)
{
	int	len;
	int	*datas;
	int	cnt;

	len = deq_len(deq);
	datas = (int *)malloc(sizeof(int) * len);
	cnt = 0;
	while (cnt < len)
	{
		datas[cnt] = deq_get_data_by_index(deq, cnt);
		cnt++;
	}
	bubble_sort_data(datas, len);
	cnt = 0;
	while (cnt < len)
	{
		deq_get_node_by_data(deq, datas[cnt])->index = cnt;
		cnt++;
	}
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
	}
}
