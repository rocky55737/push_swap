#include "push_swap.h"

void	push_swap(int ac, char **av)
{
	t_node	*deq[2];

	if (input_err(ac, av))
		exit(1);
	deq[0] = push_data_to_deq(ac, av);
	deq[1] = 0;
	set_index(deq[0]);
}
