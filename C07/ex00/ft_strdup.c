/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:46:23 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/05 18:56:52 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(char) * (sizeof(src) + 1));
	if (!dest)
		return (NULL);
	return (ft_strcpy(dest, src));
}
/*
int	main(void)
{
	char	*dup;
	char	*src;

	src = "I'm blue da bu dee da bu daa";
	dup = ft_strdup(src);
	printf("%s", dup);
	free(dup);
	dup = NULL;
	return (0);
}
*/
