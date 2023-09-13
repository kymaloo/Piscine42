/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbialy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:15:49 by bbialy            #+#    #+#             */
/*   Updated: 2023/09/03 23:36:02 by bbialy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "structure.h"

int main(int argc, char *argv[])
{
	char	*param;
	char	tab[4][4];
	Case	*ptr[4][4];
	char	dest[17];

	if (argc != 2)
		return (0);

	//format(argv[1]);
	param = ft_delete_space(dest, argv[1]);
	tab_init(tab, ptr, param);
	ft_prefill(tab, ptr);
	backtrack_fill(tab, ptr);
}

void	print_tab(char	tab[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x != 4)
	{
		y = 0;
		while (y != 4)
		{
			write(1, &tab[x][y], 1);
			if (y != 3)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}

}

char	*ft_delete_space(char *dest, char *src)
{
	int	index;
	int	index1;

	index = 0;
	index1 = 0;
	while (index < 16)
	{
		dest[index] = src[index1];
		index++;
		index1 += 2;
	}
	dest[index] = '\0';
	return (dest);
}
