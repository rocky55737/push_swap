#include "push_swap.h"

t_deqs	*sort_four(t_deqs *deqs);
t_deqs	*sort_four_case_one(t_deqs *deqs);
t_deqs	*sort_four_case_two(t_deqs *deqs);
t_deqs	*sort_four_case_three(t_deqs *deqs);
t_deqs	*sort_four_case_four(t_deqs *deqs);

t_deqs	*sort_four(t_deqs *deqs)
{
	if (deq_get_index_min(deqs->deq_a) == 0)
		deqs = sort_four_case_one(deqs);
	else if (deq_get_index_min(deqs->deq_a) == 1)
		deqs = sort_four_case_two(deqs);
	else if (deq_get_index_min(deqs->deq_a) == 3)
		deqs = sort_four_case_three(deqs);
	else
		deqs = sort_four_case_four(deqs);
	return (deqs);
}

t_deqs	*sort_four_case_one(t_deqs *deqs)
{
	deqs = pb(deqs);
	deqs = sort_three(deqs);
	deqs = pa(deqs);
	return (deqs);
}

t_deqs	*sort_four_case_two(t_deqs *deqs)
{
	deqs = sa(deqs);
	deqs = sort_four_case_one(deqs);
	return (deqs);
}

t_deqs	*sort_four_case_three(t_deqs *deqs)
{
	deqs = rra(deqs);
	deqs = sort_four_case_one(deqs);
	return (deqs);
}

t_deqs	*sort_four_case_four(t_deqs *deqs)
{
	deqs = rra(deqs);
	deqs = sort_four_case_three(deqs);
	return (deqs);
}
