/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:50:45 by trgaspar          #+#    #+#             */
/*   Updated: 2023/08/29 18:09:47 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_stralpha_num(char *str)
{
	int	minuscule;
	int	majuscule;
	int	num;

	minuscule = (*str >= 'a' && *str <= 'z');
	majuscule = (*str >= 'A' && *str <= 'Z');
	num = (*str >= '0' && *str <= '9');
	if (minuscule || majuscule || num)
	{
		return (1);
	}
	return (0);
}

void	ft_strlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
}

void	ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	if (*str >= 'a' && *str <= 'z')
	{
		ft_strupcase(&str[index]);
		index++;
	}
	else
	{
		index++;
	}
	while (str[index])
	{
		if (!(ft_stralpha_num(&str[index - 1]) && ft_stralpha_num(&str[index])))
			ft_strupcase(&str[index]);
		else
			ft_strlowcase(&str[index]);
		index++;
	}
	return (str);
}
/*
int	main()
{
	char	tab[100] = "~A09g~Uvoi[v9f<F.Qi+Ykm#Nbde&-]2z&F,|Qr0i";
	printf("%s", ft_strcapitalize(&tab[0]));
}
*/
