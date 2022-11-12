#include "push_swap.h"

int	str_ptr_len(char **str_ptr);

int	str_ptr_len(char **str_ptr)
{
	int	len;

	len = 0;
	if (str_ptr != 0)
	{
		while (str_ptr[len])
			len++;
	}
	return (len);
}
