#include "push_swap.h"

int	find_move_cnt(t_deqs *deqs)
{
	int	move_cnt;

	move_cnt = 0;
	if (deqs->deq_b->data > deq_get_max_data(deqs->deq_a))
	{
		while (deq_get_index_min(deqs->deq_a) != 0)
		{
			if (deq_len(deqs->deq_a) / 2 > deq_get_index_min(deqs->deq_a))
				deqs->deq_a = head_move_to_tail(deqs->deq_a);
			else
				deqs->deq_a = tail_move_to_head(deqs->deq_a);
			move_cnt++;
		}
	}
	else
	{
		while (deq_get_index_big(deqs->deq_a, deqs->deq_b->index) != 0)
		{
			if (deq_len(deqs->deq_a) / 2 > deq_get_index_big(deqs->deq_a, deqs->deq_b->index))
				deqs->deq_a = head_move_to_tail(deqs->deq_a);
			else
				deqs->deq_a = tail_move_to_head(deqs->deq_a);
			move_cnt++;
		}
	}
	return (move_cnt);
}
