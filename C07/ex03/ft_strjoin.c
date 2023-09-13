/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:21:24 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/12 21:32:36 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdlib.h>
#include <stdio.h>
*/

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	tab = malloc(sizeof(strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			tab[k++] = sep[j++];
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
/*
int	main(void)
{
	char	*tab[3] = { "Test", "Bleu", "Zalope"};

	printf("%s\n", ft_strjoin(3, tab, "*"));
	return(0);
}
*/
