/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul_view.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbialy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:34:22 by bbialy            #+#    #+#             */
/*   Updated: 2023/09/03 23:18:48 by bbialy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

int	calc_view_col(int x, int y, int counter, char tab[4][4])
{
	if (x == 3)
		return (counter);
	if (tab[x + 1][y] > tab[x][y])
	{
		counter++;
		counter = calc_view_col(x + 1, y, counter, tab);
		return (counter);
	}
	else if (tab[x + 2][y] > tab[x][y] && x < 2)
	{
		counter++;
		counter = calc_view_col(x + 2, y, counter, tab);
		return (counter);
	}
	else if (tab[x + 3][y] > tab[x][y] && x < 1)
		counter++;
	return (counter);
}

int	calc_view_line(int x, int y, int counter, char tab[4][4])
{
	if (y == 3)
		return (counter);
	if (tab[x][y + 1] > tab[x][y])
	{
		counter++;
		counter = calc_view_col(x, y + 1, counter, tab);
		return (counter);
	}
	else if (tab[x][y + 2] > tab[x][y] && y < 2)
	{
		counter++;
		counter = calc_view_col(x, y + 2, counter, tab);
		return (counter);
	}
	else if (tab[x][y + 3] > tab[x][y] && y < 1)
		counter++;
	return (counter);
}

int	calc_view_line_rev(int x, int y, int counter, char tab[4][4])
{
	if (y == 0)
		return (counter);
	if (tab[x][y - 1] > tab[x][y])
	{
		counter++;
		counter = calc_view_col(x, y - 1, counter, tab);
		return (counter);
	}
	else if (tab[x][y - 2] > tab[x][y] && y > 1)
	{
		counter++;
		counter = calc_view_col(x, y - 2, counter, tab);
		return (counter);
	}
	else if (tab[x][y - 3] > tab[x][y] && y > 2)
		counter++;
	return (counter);
}

int	calc_view_col_rev(int x, int y, int counter, char tab[4][4])
{
	if (x == 0)
		return (counter);
	if (tab[x - 1][y] > tab[x][y])
	{
		counter++;
		counter = calc_view_col(x - 1, y, counter, tab);
		return (counter);
	}
	else if (tab[x - 2][y] > tab[x][y] && x > 1)
	{
		counter++;
		counter = calc_view_col(x - 2, y, counter, tab);
		return (counter);
	}
	else if (tab[x - 3][y] > tab[x][y] && x > 2)
		counter++;
	return (counter);
}
