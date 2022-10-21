#include "push_swap.h"

t_deqs	*sort_three(t_deqs	*deqs)
{
	if (deqs->deq_a->data == deq_get_min_data(deqs->deq_a))
		deqs = sort_three_case_one(deqs);
	else if (deqs->deq_a->back->data == deq_get_min_data(deqs->deq_a))
		deqs = sort_three_case_two(deqs);
	else
		deqs = sort_three_case_three(deqs);
	return (deqs);
}

t_deqs	*sort_three_case_one(t_deqs	*deqs)
{
	if (deqs->deq_a->back->data == deq_get_max_data(deqs->deq_a))
	{
		deqs = rra(deqs);
		deqs = sa(deqs);
	}
	return (deqs);
}

t_deqs	*sort_three_case_two(t_deqs *deqs)
{
	if (deqs->deq_a->data == deq_get_max_data(deqs->deq_a))
		deqs = ra(deqs);
	else
		deqs = sa(deqs);
	return (deqs);
}

t_deqs	*sort_three_case_three(t_deqs *deqs)
{
	if (deqs->deq_a->data == deq_get_max_data(deqs->deq_a))
	{
		deqs = ra(deqs);
		deqs = sa(deqs);
	}
	else
		deqs = rra(deqs);
	return (deqs);
}