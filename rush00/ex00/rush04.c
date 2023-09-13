/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 18:36:34 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/27 18:37:07 by trgaspar         ###   ########.fr       */
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
			if ((a == 1 && b == 1) || (a == x && b == y))
				ft_putchar('A');
			else if ((a == 1 && b == y) || (a == x && b == 1))
				ft_putchar('C');
			else if ((a == 1) || (a == x) || (b == 1) || (b == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
