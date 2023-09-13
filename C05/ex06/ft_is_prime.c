/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:27:41 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/04 23:17:14 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb < 2)
		return (0);
	while (index <= nb / 2)
	{
		if (nb % index == 0)
		{
			return (0);
		}
		index++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(10));
}
*/
