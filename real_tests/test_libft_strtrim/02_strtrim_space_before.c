/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strtrim_space_before.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:00:04 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 20:45:58 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_strtrim_space_before(void)
{
	if (!ft_strcmp(ft_strtrim("  	HERE"), "HERE"))
		return (0);
	else
		return (-1);
}
