/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbraun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:32:23 by fbraun            #+#    #+#             */
/*   Updated: 2023/08/27 17:05:31 by fbraun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(char x, char y)
{
	char	a;
	char	b;

	b = 1;
	while (b <= y && x > 0)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == 1))
				ft_putchar('o');
			else if ((a == 1 && b == y) || (a == x && b == y))
				ft_putchar('o');
			else if ((a == y) || (a == 1))
				ft_putchar('|');
			else if (b == y || b == 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
				a++;
		}
		ft_putchar('/n');
			b++;
	}		
}
