#include "push_swap_bonus.h"

t_deqs	*execute_command(t_deqs *deqs, char *command);
t_deqs	*do_execute(t_deqs *deqs, char *command);

t_deqs	*execute_command(t_deqs *deqs, char *command)
{
	if (!is_command(command))
	{
		write(1, "KO\n", 3);
		exit(0);
	}
	deqs = do_execute(deqs, command);
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
	else if (ft_strcmp(command, "rrr") == 0)
		deqs = pa(deqs);
	else if (ft_strcmp(command, "rrr") == 0)
		deqs = pb(deqs);
	return (deqs);
}