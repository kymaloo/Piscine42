/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbialy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:49:18 by bbialy            #+#    #+#             */
/*   Updated: 2023/09/03 23:17:36 by bbialy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

void	backtrack_fill(char tab[4][4], Case *ptr[4][4])
{
	int	i;
	int	j;
	int	n;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j] == '0')
			{
				n = 1;
				while (n <= 4)
				{
					if (is_possible(tab, ptr, i, j, n))
						backtrack_fill(tab, ptr);
					n++;
				}
				return ;
			}
			j++;
		}
		i++;
	}
	print_tab(tab);
}

int	is_possible(char tab[4][4], Case *ptr[4][4], int x, int y, int n)
{
	if(check_duplicate(tab, x, y, n))
	{
		tab[x][y] = n + 48;
		if (check_line(tab, ptr, x, y) && check_col(tab, ptr, x, y))
			return (1);
		else
			return (0);
	}
	return (0);
}
