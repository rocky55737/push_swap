#include "push_swap_bonus.h"

int	is_sorted(t_deqs *deqs, int total_len);

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
