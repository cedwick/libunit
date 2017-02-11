/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_string_with_null.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:20:19 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/11 19:21:30 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_test.h"

int	string_with_null(void)
{
	int	i;
	int	j;

	i = ft_strlen("hello\0hidden");
	j = ft_strlen("hello\0hidden");
	if (i == j)
		return (0);
	else
		return (-1);
}
