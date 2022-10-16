#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
	int		index;
	int		data;
	t_node	*front;
	t_node	*back;
}	t_node;

void	write_err(char	*err_msg);

int		input_err(int ac, char **av);

t_node	*new_node(int data);
t_node	*deq_append_back(t_node *deq, t_node *new_node);
t_node	*deq_append_front(t_node *deq, t_node *new_node);
t_node	*deq_pop_head(t_node *deq);
t_node	*deq_pop_tail(t_node *deq);

#endif