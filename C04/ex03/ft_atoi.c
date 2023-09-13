/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:10:46 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/31 20:46:50 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("Resultat : %d\n", ft_atoi(argv[1]));
	}
	return (0);
}

