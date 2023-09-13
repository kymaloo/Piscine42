/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:25:09 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/29 17:36:18 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	index1;

	index = 0;
	index1 = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[index1] != '\0')
	{
		dest[index] = src[index1];
		index++;
		index1++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	array[50] = "It's A Me Mario";
	char	array1[] = "Pikachu je te choisi";
	char	array2[50] = "It's A Me Mario";
	char	array3[] = "Pikachu je te choisi";

	ft_strcat(array, array1);
	strcat(array2, array3);
	printf("ft_strcat : %s\nstrcat : %s\n", array, array2);
}
*/
