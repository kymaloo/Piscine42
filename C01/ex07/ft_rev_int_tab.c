/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:08:15 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/24 17:56:02 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	*rev;
	int	cpt;

	cpt = 0;
	rev = (tab + size - 1);
	while (cpt++ < (size / 2))
	{
		ft_swap(tab, rev);
		tab++;
		rev--;
	}
}
/*
int	main(void)
{
	int	tab[5];
	int	index;
	
	index = 0;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;

	ft_rev_int_tab(&tab[0], 5);
	while ( index < 5)
	{
		printf("%d", tab[index]);
		index++;
	}
}
*/
