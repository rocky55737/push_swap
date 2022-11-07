/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_char_ptr_arr_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhong <rhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:10:42 by rhong             #+#    #+#             */
/*   Updated: 2022/11/07 16:11:22 by rhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_char_ptr_arr(char **char_ptr_arr)
{
	int	cnt;

	cnt = 0;
	while (char_ptr_arr[cnt])
	{
		free(char_ptr_arr[cnt]);
		cnt++;
	}
	free(char_ptr_arr);
}
