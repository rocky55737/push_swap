#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include "../get_next_line/get_next_line_bonus.h"

typedef struct s_node
{
	int				index;
	int				data;
	struct s_node	*front;
	struct s_node	*back;
}	t_node;

typedef struct s_deqs
{
	t_node	*deq_a;
	t_node	*deq_b;
}	t_deqs;

#endif