/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 01:20:40 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/28 22:01:36 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
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
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (src[index])
	{
		index++;
	}
	if (size == 0)
		return (index);
	index = 0;
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
		dest[index] = '\0';
	while (src[index])
	{
		index++;
	}
	return (index);
}
/*
int	main(void)
{
	char	array[] = "It's A Me Mario";
	char	array1[] = "Pikachu je te choisi";
	char	array2[] = "It's A Me Mario";
	char	array3[] = "Pikachu je te choisi";
	unsigned	int	stop;

	stop = 6;
	ft_strlcpy(array, array1, stop);
	strlcpy(array2, array3, stop);
	ft_putstr(array);
	write(1, " ", 1);
	ft_putstr(array2);
}
*/
