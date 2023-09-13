/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 02:14:33 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/02 21:33:28 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0' )
	{
		write(1, str, 1);
		str++;
	}
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	index;
	int	index1;

	index = 0;
	index1 = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
		index1 + 2;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	array[] = "Test";
	char	array1[] = "Bleu";
	char	array2[] = "Test";
	char	array3[] = "Bleu";

	ft_strcpy(array, array1);
	strcpy(array2, array3);
	ft_putstr(array);
	ft_putstr(array2);
}
*/
