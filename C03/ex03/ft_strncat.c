/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:26:24 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/29 23:48:09 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	index1;

	index = 0;
	index1 = 0;
	while (dest[index])
	{
		index++;
	}
	while (nb > index1 && src[index1])
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
	int	stop;
	char	array[500] = "Qui vit dans un ananas dans la mer";
	char	array1[500] = "bob l eponge carre";
	char	array2[500] = "Qui vit dans un ananas dans la mer";
	char	array3[500] = "bob l eponge carre";

	stop = 5;

	printf("%s\n", ft_strncat(array, array1, stop));
	printf("%s", strncat(array2, array3, stop));
}
*/
