/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_nl_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:46:54 by rhong             #+#    #+#             */
/*   Updated: 2022/11/10 16:47:12 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*trim_nl(char *str)
{
	char	*ret;

	ret = str;
	if (!str)
		return (0);
	if (str[ft_strlen(str) - 1] == '\n')
	{
		ret = ft_substr(str, 0, ft_strlen(str) - 1);
		free(str);
		return (ret);
	}
	return (ret);
}
