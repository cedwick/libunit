/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_lets_abort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:32:18 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/12 20:41:10 by cbarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework_test.h"

int	lets_abort(void)
{
	char 		*tmp;

	tmp = 0;
	abort();
	return (0);
}
