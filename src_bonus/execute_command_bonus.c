/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:11:06 by rhong             #+#    #+#             */
/*   Updated: 2022/11/13 17:01:01 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_deqs	*execute_command(t_deqs *deqs);
t_deqs	*do_execute(t_deqs *deqs, char *command);
int		is_command(char *str);

t_deqs	*execute_command(t_deqs *deqs)
{
	char	*command;

	command = trim_nl(get_next_line(0));
	while (command)
	{
		if (!is_command(command))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		deqs = do_execute(deqs, command);
		free(command);
		command = trim_nl(get_next_line(0));
	}
	free(command);
	return (deqs);
}

t_deqs	*do_execute(t_deqs *deqs, char *command)
{
	if (ft_strcmp(command, "sa") == 0)
		deqs = sa(deqs);
	else if (ft_strcmp(command, "ra") == 0)
		deqs = ra(deqs);
	else if (ft_strcmp(command, "rra") == 0)
		deqs = rra(deqs);
	else if (ft_strcmp(command, "sb") == 0)
		deqs = sb(deqs);
	else if (ft_strcmp(command, "rb") == 0)
		deqs = rb(deqs);
	else if (ft_strcmp(command, "rrb") == 0)
		deqs = rrb(deqs);
	else if (ft_strcmp(command, "ss") == 0)
		deqs = ss(deqs);
	else if (ft_strcmp(command, "rr") == 0)
		deqs = rr(deqs);
	else if (ft_strcmp(command, "rrr") == 0)
		deqs = rrr(deqs);
	else if (ft_strcmp(command, "pa") == 0)
		deqs = pa(deqs);
	else if (ft_strcmp(command, "pb") == 0)
		deqs = pb(deqs);
	return (deqs);
}

int	is_command(char *str)
{
	if (ft_strcmp(str, "sa") == 0)
		return (1);
	else if (ft_strcmp(str, "ra") == 0)
		return (1);
	else if (ft_strcmp(str, "rra") == 0)
		return (1);
	else if (ft_strcmp(str, "sb") == 0)
		return (1);
	else if (ft_strcmp(str, "rb") == 0)
		return (1);
	else if (ft_strcmp(str, "rrb") == 0)
		return (1);
	else if (ft_strcmp(str, "ss") == 0)
		return (1);
	else if (ft_strcmp(str, "rr") == 0)
		return (1);
	else if (ft_strcmp(str, "rrr") == 0)
		return (1);
	else if (ft_strcmp(str, "pa") == 0)
		return (1);
	else if (ft_strcmp(str, "pb") == 0)
		return (1);
	return (0);
}
