/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:14:29 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/11 20:05:04 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	array[] = "hhhyf";
	char	array1[] = "hhhh";
	char	array2[] = "hhhyf";
	char	array3[] = "hhhh";

	printf("%d\n", ft_strcmp(array, array1));
	printf("%d", strcmp(array2, array3));
}
*/
