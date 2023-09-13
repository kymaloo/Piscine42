/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:02:35 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/24 19:59:32 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*(cpt + str))
	{
		cpt++;
	}
	return (cpt);
}
/*
int	main(void)
{
	char	*ptr;

	ptr = "Bleu";
	printf("%d", ft_strlen(ptr));
}
*/
