/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_simple_null.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:16:22 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 19:54:07 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	simple_null(void)
{
	int real_atoi;
	int ft_atoi;

	real_atoi = atoi("NULL");
	ft_atoi = ft_atoi("NULL");
	if (real_atoi == ft_atoi)
		return (0);
	else
		return (-1);
}