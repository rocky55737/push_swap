#include "push_swap.h"

int	first_is_small_move(t_deqs *deqs)
{
	int	first_move;
	int	last_move;

	first_move = find_move_cnt(deqs);
	deqs->deq_b = tail_move_to_head(deqs->deq_b);
	last_move = find_move_cnt(deqs) + 1;
	if (first_move <= last_move)
		return (1);
	else
		return (0);
}
