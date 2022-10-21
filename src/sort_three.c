#include "push_swap.h"

t_node	*sort_three(t_node *deq[2])
{
	if (deq[0]->data == deq_get_min_data(deq[0]))
	{
		if (deq[0]->back->data == deq_get_max_data(deq[0]))
		{
			rra(deq);
			sa(deq);
		}
	}
	else if (deq[0]->back->data == deq_get_min_data(deq[0]))
	{
		if (deq[0]->data == deq_get_max_data[deq[0]])
			ra(deq);
		else
			sa(deq);
	}
	else
	{
		if (deq[0]->data == deq_get_max_data(deq[0]))
		{
			ra(deq);
			sa(deq);
		}
		else
			rra(deq);
	}
}