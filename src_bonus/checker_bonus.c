#include "push_swap_bonus.h"

void	checker(int ac, char **av)
{
	t_deqs	*deqs;

	if (input_err(ac, av))
		exit(1);
	deqs = (t_deqs *)malloc(sizeof(t_deqs));
	malloc_null_guard(deqs);
	deqs->deq_a = push_data_to_deq(ac, av);
	deqs->deq_b = 0;
	deqs->deq_a = set_index(deqs->deq_a);
	deqs = sort(deqs);
	return ;
}