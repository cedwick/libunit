/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_strsplit_no_split.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 08:20:29 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:52:19 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strsplit_no_split(void)
{
	char	**res;

	res = ft_strsplit("abc", ' ');
	if (!ft_strcmp(res[0], "abc") && !res[1])
		return (0);
	else
		return (-1);
}
