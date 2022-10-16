#include "push_swap.h"

void	push_swap(int ac, char **av)
{
	if (input_err(ac, av))
		exit(1);
	push_data_to_deq(ac, av);
}
