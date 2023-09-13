/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalferov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:39:11 by aalferov          #+#    #+#             */
/*   Updated: 2023/09/10 17:56:42 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	add;

	count = 0;
	add = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[add] != '\0')
	{
		dest[count] = src[add];
		count++;
		add++;
	}
	dest[count] = '\0';
	return (dest);
}

char	ft_empty_str(char *empty_str)
{
	if (empty_str != NULL)
		empty_str[0] = '\0';
	return (*empty_str);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	total_length;
	int	i;

	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
		if (i < size - 1)
			total_length += ft_strlen(sep);
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty_str;
	int		total_length;
	char	*result;
	int		i;

	if (size == 0)
	{
		empty_str = (char *)malloc(1);
		ft_empty_str(empty_str);
	}
	total_length = ft_total_length(size, strs, sep);
	result = (char *)malloc(sizeof(char) * total_length + 1);
	if (result != NULL)
	{
		result[0] = '\0';
		i = 0;
		while (i < size)
		{
			ft_strcat(result, strs[i]);
			if (i < size - 1)
				ft_strcat(result, sep);
			i++;
		}
	}
	return (result);
}
