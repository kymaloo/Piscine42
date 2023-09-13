/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:34:09 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/25 01:58:37 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*ptr;
	int	*ptr2;

	a = 6;
	b = 2;
	ptr = &a;
	ptr2 = &b;

	ft_ultimate_div_mod(ptr, ptr2);

	printf("%d", a);
	printf("%d", b);
}
*/
