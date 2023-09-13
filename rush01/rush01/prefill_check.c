/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefill_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbialy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:34:41 by bbialy            #+#    #+#             */
/*   Updated: 2023/09/03 17:05:57 by bbialy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structure.h"

void	ft_check_case(char tab[4][4], Case *ptr[4][4], int x, int y)
{
	ft_check_4(tab, ptr, x, y);
	ft_check_1(tab, ptr, x, y);
}

void	ft_prefill(char tab[4][4], Case *ptr[4][4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_check_case(tab, ptr, i, j);
			j++;
		}
		i++;
		j = 0;
	}
}

void	ft_check_1(char tab[4][4], Case *ptr[4][4], int x, int y)
{
	if (ptr[x][y]->p_up == '1' && tab[0][y] == '0')
		tab[0][y] = '4';
	else if (ptr[x][y]->p_down == '1' && tab[0][y] == '0')
		tab[3][y] = '4';
	if (ptr[x][y]->p_left == '1' && tab[x][0] == '0')
		tab[x][0] = '4';
	else if (ptr[x][y]->p_right == '1' && tab[x][3] == '0')
		tab[x][3] = '4';
}

void	ft_check_4(char tab[4][4], Case *ptr[4][4], int x, int y)
{
	if (ptr[x][y]->p_up == '4' && x == 0)
	{
		ft_fill4(y, 1, tab);
	}
	else if (ptr[x][y]->p_down == '4' && x == 0)
	{
		ft_fill4_rev(y, 1, tab);
	}
	if (ptr[x][y]->p_left == '4' && y == 0)
	{
		ft_fill4(x, 0, tab);
	}
	else if (ptr[x][y]->p_right == '4' && y == 0)
	{
		ft_fill4_rev(x, 0, tab);
	}
}
