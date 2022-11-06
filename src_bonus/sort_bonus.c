/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:22:15 by rhong             #+#    #+#             */
/*   Updated: 2022/11/04 18:06:18 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sort(t_deqs *deqs);
int		is_sorted(t_deqs *deqs, int total_len);

void	sort(t_deqs *deqs)
{
	char	*buffer;
	int		total_len;
	
	total_len = deq_len(deqs->deq_a);
	if (is_sorted(deqs, total_len))
	{
		buffer = get_next_line(0);
		if (!buffer)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
		free(buffer);
		exit(0);
	}
	buffer = get_next_line(0);
	while (buffer)
	{
		deqs = execute_command(deqs, buffer);
		free(buffer);
		buffer = get_next_line(0);
	}
	free(buffer);
	if (is_sorted(deqs, total_len))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	exit(0);
}

int	is_sorted(t_deqs *deqs, int total_len)
{
	int		index;
	t_node	*tmp;

	index = 0;
	tmp = deqs->deq_a;
	while (tmp && index == tmp->index)
	{
		tmp = tmp->back;
		index++;
	}
	if (total_len != index)
	{
		return (0);
	}
	return (1);
}
