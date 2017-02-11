/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher_libft_strlen.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <cbarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:55:48 by cbarbier          #+#    #+#             */
/*   Updated: 2017/02/11 20:33:11 by matirell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"

int		ft_strlen_launcher(void)
{
	int		(*pt0)();
	int		(*pt1)();
	int		(*pt2)();
	int		(*pt3)();
	t_unit	*tests;

	pt0 = one_char_string;
	pt1 = tab_and_spaces;
	pt2 = null_string;
	pt3 = string_with_null;
	tests = ft_memalloc(sizeof(t_unit));
	if (tests)
	{
		tests->head = NULL;
		tests->cur = NULL;
		ft_putendl("\t\t{ ------------------------------- }");
		ft_putendl("\t\t{ -       FT_STRLEN TESTER      - }");
		ft_putendl("\t\t{ ------------------------------- }");
		load_test(tests, " 1/4 [EASY] - one char string\t", &pt0);
		load_test(tests, " 2/4 [EASY] - string with tab and spaces\t", &pt1);
		load_test(tests, " 3/4 [HARD] - NULL string ", &pt2);
		load_test(tests, " 4/4 [HARD] - string containing a null char", &pt3);
		tests->returnval = ft_execute_tests(tests);
		ft_display_resume(tests, 1);
		return (tests->returnval);
	}
	return (-1);
}
