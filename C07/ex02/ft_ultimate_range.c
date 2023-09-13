/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:56:01 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/07 04:57:30 by trgaspar         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
/*
int main(void)
{
    int *range;
    int min = 5;
    int max = 12;
	int	i;

    int size = ft_ultimate_range(&range, min, max);
	
	i = 0;
	while (i < size)
	{
		printf("%d, ", range[i]);
		i++;
	}
}
*/
