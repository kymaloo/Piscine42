/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefill_fill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbialy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:40:45 by bbialy            #+#    #+#             */
/*   Updated: 2023/09/03 21:00:21 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

void	ft_fill4(int xy, int hor_ver, char tab[4][4])
{
	int	i;

	i = 1;
	if (hor_ver == 0)
	{
		while (i <= 4)
		{
			tab[xy][i - 1] = i + '0';
			i++;
		}
	}
	else
	{
		while (i <= 4)
		{
			tab[i - 1][xy] = i + '0';
			i++;
		}
	}
}

void	ft_fill4_rev(int xy, int hor_ver, char tab[4][4])
{
	int	i;
	int	j;

	i = 4;
	j = 1;
	if (hor_ver == 0)
	{
		while (i >= 1)
		{
			tab[xy][i - 1] = j + '0';
			i--;
			j++;
		}
	}
	else
	{
		while (i >= 1)
		{
			tab[i - 1][xy] = j + '0';
			i--;
			j++;
		}
	}
}
