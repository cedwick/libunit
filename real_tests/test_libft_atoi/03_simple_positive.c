/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_simple_positive.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matirell <matirell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:16:22 by matirell          #+#    #+#             */
/*   Updated: 2017/02/11 21:04:52 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int	ft_atoi_positive(void)
{
	int real_atoi;
	int ft_atoi_ret;

	real_atoi = atoi("42");
	ft_atoi_ret = ft_atoi("42");
	if (real_atoi == ft_atoi_ret)
		return (0);
	else
		return (-1);
}
