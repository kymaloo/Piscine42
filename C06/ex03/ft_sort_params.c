/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:50:08 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/13 16:45:37 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_sort_char_tab(char *tab[], int size)
{
	char	*swap;
	int		scan;
	int		letter;
	int		count;

	count = 1;
	while (size >= count)
	{
		scan = count + 1;
		while (scan < size)
		{
			letter = 0;
			while (tab[scan][letter] == tab[count][letter])
				++letter;
			if (tab[scan][letter] > tab[count][letter])
			{
				swap = tab [count];
				tab[count] = tab [scan];
				tab [scan] = swap;
			}
			scan++;
		}
		count++;
	}
	return (tab);
}

int	main(int argc, char	*argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	argv = ft_sort_char_tab(argv, argc);
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
		--i;
	}
	return (0);
}
