#include "push_swap.h"

t_deqs	*sort_five_case_four(t_deqs *deqs);
t_deqs	*sort_five_case_five(t_deqs *deqs);

t_deqs	*sort_five_case_four(t_deqs *deqs)
{
	deqs = rra(deqs);
	deqs = sort_five_case_one(deqs);
	return (deqs);
}

t_deqs	*sort_five_case_five(t_deqs *deqs)
{
	deqs = rra(deqs);
	deqs = sort_five_case_four(deqs);
	return (deqs);
}
