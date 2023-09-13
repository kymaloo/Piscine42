/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:12:54 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/29 23:46:07 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && (*s1 && *s2) && (index < n - 1))
	{
		index++;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	int	stop;
	char	array[] = "hhhhkk";
	char	array1[] = "hhhh";
	char	array2[] = "hhhhkk";
	char	array3[] = "hhhh";

	stop = 5;

	printf("%d\n", ft_strncmp(array, array1, stop));
	printf("%d", strncmp(array2, array3, stop));
}*/
