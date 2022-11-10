/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_ptr_cat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:06:53 by rhong             #+#    #+#             */
/*   Updated: 2022/11/10 18:27:41 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_str_ptr_cat(char **src, char **dest)
{
	int		src_cnt;
	int		dest_cnt;
	char	**ret;

	if (src == 0 && dest == 0)
		return (0);
	else if (src == 0)
		return (dest);
	else if (dest == 0)
		return (src);
	src_cnt = 0;
	while (src[src_cnt])
		src_cnt++;
	dest_cnt = 0;
	while (dest[dest_cnt])
		dest_cnt++;
	ret = (char **)malloc (sizeof(char) * (src_cnt + dest_cnt + 1));
	dest_cnt = 0;
	while (dest[dest_cnt])
	{
		ret[dest_cnt] = dest[dest_cnt];
		dest_cnt++;
	}
	src_cnt = 0;
	while (src[src_cnt])
	{
		ret[dest_cnt + src_cnt] = src[src_cnt];
		src_cnt++;
	}
	ret[dest_cnt + src_cnt] = 0;
	return (ret);
}
