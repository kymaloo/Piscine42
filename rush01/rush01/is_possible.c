/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_possible.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:48:36 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/03 23:16:57 by bbialy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

int	check_duplicate(char tab[4][4], int	x, int y, int n)
{
	int	i;
	int	j;

	i = x;
	j = 0;
	while (j < 4)
	{
		if (tab[i][j] == n + 48)
			return (0);
		j++;
	}
	j = y;
	i = 0;
	while (i < 4)
	{
		if (tab[i][j] == n + 48)
			return (0);
		i++;
	}
	return (1);
}

int	check_line(char	tab[4][4], Case *ptr[4][4], int x, int y)
{
	int	i;
	int	j;

	i = x;
	j = 0;
	while (j < 4)
	{
		if (tab[i][j] == '0')
			return (0);
		j++;
	}
	if (check_view_line(tab, ptr, x, y) == 0)
		return (0);
	return (1);
}

int	check_col(char tab[4][4], Case *ptr[4][4], int x, int y)
{
	int	i;
	int	j;

	j = y;
	i = 0;
	while (i < 4)
	{
		if (tab[i][j] == '0')
			return (0);
		i++;
	}
	if (check_view_col(tab, ptr, x, y) == 0)
		return (0);
	return (1);
}

int	check_view_col(char tab[4][4], Case *ptr[4][4], int x, int y)
{
	int	i;
	int	count_view;
	int	p1;
	int	p2;

	i = 0;
	count_view = 1;
	count_view = calc_view_col(0, y, count_view, tab);
	p1 = ptr[x][y]->p_up;
	p2 = ptr[x][y]->p_down;
	if (count_view != p1 - 48)
		return (0);
	count_view = 1;
	count_view = calc_view_col_rev(3, y, count_view, tab);
	if (count_view != p2 - 48)
		return (0);
	return (1);
}

int	check_view_line(char tab[4][4], Case *ptr[4][4], int x, int y)
{
	int	i;
	int	count_view;
	int	p1;
	int	p2;

	i = 0;
	count_view = 1;
	count_view = calc_view_line(0, x, count_view, tab);
	p1 = ptr[x][y]->p_left;
	p2 = ptr[x][y]->p_right;
	if (count_view != p1 - 48)
		return (0);
	count_view = 1;
	count_view = calc_view_line_rev(3, x, count_view, tab);
	if (count_view != p2 - 48)
		return (0);
	return (1);
}
