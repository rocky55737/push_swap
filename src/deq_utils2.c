#include "push_swap.h"

t_node	*head_move_to_tail(t_node *deq)
{
	t_node	*tmp;

	if (deq == 0)
		return (0);
	tmp = deq;
	deq = deq_append_back(deq, new_node(tmp->data));
	deq = deq_pop_head(deq);
	return (deq); 
}

t_node	*tail_move_to_head(t_node *deq)
{
	t_node	*tmp;

	if (deq == 0)
		return (0);
	tmp = deq;
	while (tmp->back != 0)
		tmp = tmp->back;
	deq_append_front(deq, new_node(tmp->data));
	deq_pop_tail(deq);
	return (deq);
}

t_node	*swap_head_neck(t_node *deq)
{
	t_node	*tmp;
	
	if (deq == 0 || deq->back == 0)
		return (deq);
	tmp = deq->back;
	deq->back = tmp->back;
	tmp->back = deq;
	deq->front = tmp;
	tmp->front = 0;
	return (tmp);
}

t_node	*head_dup_to_other_head(t_node *deq_s, t_node *deq_d)
{
	t_node	*tmp;

	if (deq_s == 0)
		return (deq_d);
	tmp = new_node(deq_s->data);
	deq_append_front(deq_d, tmp);
	return (deq_d);
}
