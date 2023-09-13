/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:20:59 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/26 18:06:51 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int a, int b, int c)
{
	if (!(a == b || b == c || c == a))
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (!(a == '7' && b == '8' && c == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	az;
	int	bz;
	int	cz;

	az = '0';
	while (az <= '7')
	{
		bz = az + 1;
		while (bz <= '8')
		{
			cz = bz + 1;
			while (cz <= '9')
			{
				ft_display(az, bz, cz);
				cz++;
			}
			bz++;
		}
		az++;
	}
}

int	main(void)
{
	ft_print_comb();
}

