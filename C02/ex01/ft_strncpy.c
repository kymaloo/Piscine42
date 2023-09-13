/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 05:37:28 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/30 01:55:40 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (n > index)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
int	main(void)
{
	char	array[] = "It's A Me Mario";
	char	array1[] = "Pikachu je te choisi";
	char	array2[] = "It's A Me Mario";
	char	array3[] = "Pikachu je te choisi";
	unsigned	int	stop;

	stop = 5;
	ft_strncpy(array, array1, stop);
	strncpy(array2, array3, stop);
	ft_putstr(array);
	write(1, " ", 1);
	ft_putstr(array2);
}

