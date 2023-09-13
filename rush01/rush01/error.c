/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarnoux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:12:55 by tarnoux           #+#    #+#             */
/*   Updated: 2023/09/03 22:38:48 by tarnoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_format(char *str)
{
	int	i;
	int	len;

	len = ft_strlen(str);
	i = 0;
	if (len != 31)
	{
		return (0);
	}	
	while (str[i])
	{
		if ((str[i] < '1' || str[i] > '4') && (i % 2 == 0))
		{
			return (0);
		}
		if (i % 2 == 1 && str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
