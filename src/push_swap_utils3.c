#include "push_swap.h"

void	rra(t_node *deq[2]);
void	rrb(t_node *deq[2]);
void	rrr(t_node *deq[2]);

void	rra(t_node *deq[2])
{
	tail_move_to_head(deq[0]);
}

void	rrb(t_node *deq[2])
{
	tail_move_to_head(deq[1]);
}

void	rrr(t_node *deq[2])
{
	tail_move_to_head(deq[0]);
	tail_move_to_head(deq[1]);
}