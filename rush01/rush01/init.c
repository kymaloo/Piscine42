/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:23:00 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/03 20:54:10 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"
#include <stdlib.h>

void	tab_init(char tab[4][4], Case *ptr[4][4], char *param)
{
	int	x;
	int	y;

	x = 0;
	while (x != 4)
	{
		y = 0;
		while (y != 4)
		{
			tab[x][y] = '0';
			ptr_init(ptr, x, y, param);
			y++;
		}
		x++;
	}
}

void	ptr_init(Case *ptr[4][4], int x, int y, char *param)
{
	Case	*ptr_case;

	ptr_case = malloc(sizeof(Case));
	ptr[x][y] = ptr_case;
	ptr[x][y]->p_up = param[(x * 4 + y) % 4];
	ptr[x][y]->p_down = param[((x * 4 + y) % 4) + 4];
	ptr[x][y]->p_left = param[((x * 4 + y) / 4) + 8];
	ptr[x][y]->p_right = param[((x * 4 + y) / 4) + 12];
}
