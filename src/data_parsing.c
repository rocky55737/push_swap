#include "push_swap.h"

char	**data_parsing(char **av, int ac)
{
	char	**data;
	char	**splitted;
	int		cnt;

	data = 0;
	cnt = 1;
	while (cnt < ac)
	{
		splitted = ft_split(av[cnt], ' ');
		data = str_ptr_dup_cat(data, splitted);
		cnt++;
	}
	return (data);
}
