/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:23:07 by trgaspar          #+#    #+#             */
/*   Updated: 2023/09/10 20:28:33 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_parse(char	*nb);
int		ft_strlen_hund(int	*number);
int		ft_recursive_power(int	nb, int	power);
char	ft_123(int	hundred);
char	ft_llion(int	thousand);
char	*ft_itoa(int	number);
char	ft_hundreds(int	number);
int		ft_atoi(char	*str);
void	ft_search_number(char	*str, char	*nb);

#endif
