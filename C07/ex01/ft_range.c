/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:57:20 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/07 07:42:07 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * ((max - min)));
	if (!tab)
		return (NULL);
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	min;
	int	max;
	int	i;
	int	size;

	i = 0;
	min = -5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
	return(0);
}
*/
