/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_printable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:24:17 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/26 10:24:46 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
*/
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main()
{
	ft_putstr("Hisashiburi dana mugiwara\n");
	printf("%d",ft_str_is_printable("CROCODILE"));
}
*/
