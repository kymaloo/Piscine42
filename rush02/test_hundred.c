/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalferov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 17:31:51 by aalferov          #+#    #+#             */
/*   Updated: 2023/09/10 19:31:40 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
/*
int	ft_strlen(int *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
*/

int	ft_strlen_hund(unsigned long long *number)
{
	int	numer_char;
	int	a;

	a = 1;
	while (number[a] != '\0')
	{
		a++;
	}
	numer_char = a;
	if (numer_char % 3 == 0)
		return (numer_char / 3);
	else
		return (numer_char / 3 + 1);
}

int	ft_recursive_power(int nb, int power)
{
	int	mult;

	mult = nb;
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (mult);
}

char	ft_123(int hundred)
{
	char	a;
	char	b;
	char	c;

	if (hundred >= 100)
	{
		a = ft_parse(hundred / 100);
		write (1, &a, 5);
		write (1, "hundred ", 8);
		hundred = hundred % 100;
	}
	if (hundred >= 10 && hundred <= 19)
	{
		b = ft_parse(hundred);
		write (1, &b, 9);
	}
	if (hundred >= 20 && hundred <= 99)
	{
		b = ft_parse((hundred / 10) * 10);
		write (1, &b, 8);
		hundred = hundred % 10;
	}
	if (hundred >= 0 && hundred <= 9)
	{
		c = ft_parse(hundred);
		write (1, &c, 5);
	}
}

char	ft_llion(int thousand)
{
	char	d;

	d = ft_parse(ft_recursive_power(10, (3 * thousand)));
	write (1, " ", 1);
	write (1, &d, 14);
	write (1, " ", 1);

char	*ft_itoa(unsigned long long number)
{
	int					length;
	unsigned long long	ten;
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


char	ft_hundreds(unsigned long long number)
{
	int	q_hundreds;

	q_hundreds = ft_strlen_hund(number);
	while (q_hundreds >= 1);
	{
		char	a;
		char	b;

		ft_123(number / ft_recursive_power(10, (3 * (q_hundreds - 1)))); //add function for transfiguration from int into char
		number = number % ft_recursive_power(10, (3 * (q_hundreds - 1)));
		ft_llion(q_hundreds - 1); //add function in which separator is defined based on the value (q_hundreds - 1);
		q_hundreds--;
	}
}
