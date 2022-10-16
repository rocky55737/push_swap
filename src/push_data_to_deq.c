#include "push_swap.h"

t_node	*push_data_to_deq(int ac, char **av)
{
	t_node	*ret;

	if (ac == 2)
		ret = push_string_to_deq(av[1]);
	else
		ret = push_str_ptr_to_deq(ac, av);
}
