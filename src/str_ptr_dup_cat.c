#include "push_swap.h"

char	**do_str_ptr_cat(char **dest, char **src, int d_start);
char	**str_ptr_dup_cat(char **dest, char **src);

char	**do_str_ptr_cat(char **dest, char **src, int d_start)
{
	int	cnt;

	cnt = 0;
	while (src[cnt])
	{
		dest[d_start + cnt] = ft_strdup(src[cnt]);
		free(src[cnt]);
		cnt++;
	}
	if (src)
		free(src);
	return (dest);
}

char	**str_ptr_dup_cat(char **dest, char **src)
{
	int		dest_len;
	int		src_len;
	int		full_len;
	char	**ret;

	if (dest == 0 && src == 0)
		return (0);
	else if (src == 0)
		return (dest);
	dest_len = str_ptr_len(dest);
	src_len = str_ptr_len(src);
	full_len = dest_len + src_len;
	ret = (char **)malloc(sizeof(char *) * (full_len + 1));
	malloc_null_guard(ret);
	ret = do_str_ptr_cat(ret, dest, 0);
	ret = do_str_ptr_cat(ret, src, dest_len);
	ret[full_len] = 0;
	return (ret);
}
