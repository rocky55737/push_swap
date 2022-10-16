#include "push_swap.h"

void	push_swap(int ac, char **av)
{
	t_node	*deq;

	if (input_err(ac, av))
		exit(1);
	deq = push_data_to_deq(ac, av);
}
