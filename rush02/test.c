/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:46:57 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/10 21:46:10 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_parse(char	*nb)
{
	char	buf[691];
	int	fd;
	int	byte;
	int	count;

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (1);
	byte = 0;
	count = 0;
	
	while ((byte = read(fd, &buf, sizeof(buf))) > 0)
		byte++;
	ft_search_number(buf, nb);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
//		s2++;
	}
	return (*s1 - *s2);
}

void	ft_search_number(char	*str, char	*nb)
{
	while(*str)
	{
		if(ft_strcmp(str, nb) == 0)
			str += 2;
		while(*str != '\n')
		{
			write(1, str, 1);
			str++;
		}
		str++;
	}
}

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == ' ')
	{
		str++;
	}
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - 48);
		str++;
	}
	return (nb * sign);
}

char	*ft_itoa(int number)
{
	int					length;
	int					ten;
	char				*str;
	int					i;

	ten = number;
	length = 0;
	while (ten >= 10)
	{
		length++;
		ten = ten / 10;
	}
	length += 1;
	str = (char *)malloc(sizeof(char) * length + 1);
	if (str != NULL)
	{
		str[length] = '\0';
		i = length - 1;
		while (i > 0)
		{
			str[i] = (number % 10) + '0';
			number = number / 10;
			i--;
		}
	}
	return (str);
}
