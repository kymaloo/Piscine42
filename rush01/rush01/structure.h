/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbialy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:58:09 by bbialy            #+#    #+#             */
/*   Updated: 2023/09/03 23:22:31 by bbialy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
#define STRUCTURE_H

typedef struct Case Case;
struct Case
{
	char	p_up;
	char	p_down;
	char	p_left;
	char	p_right;
};

void	print_tab();
void	tab_init(char tab[4][4], Case *ptr[4][4], char *param);
void	ptr_init(Case *ptr[4][4], int x, int y, char *param);
char	*ft_delete_space(char *dest, char *src);
void	ft_check_case(char tab[4][4], Case *ptr[4][4], int x, int y);
void	ft_prefill(char tab[4][4], Case *ptr[4][4]);
void	ft_check_4(char tab[4][4], Case *ptr[4][4], int x, int y);
void	ft_check_1(char tab[4][4], Case *ptr[4][4], int x, int y);
void	ft_fill4(int xy, int hor_ver, char tab[4][4]);
void	ft_fill4_rev(int xy, int hor_ver, char tab[4][4]);
int		format(char argv[1]);
void	backtrack_fill(char tab[4][4], Case *ptr[4][4]);
int		check_duplicate(char tab[4][4], int x, int y, int n);
int 	check_line(char tab[4][4], Case *ptr[4][4], int x, int y);
int 	check_col(char tab[4][4], Case *ptr[4][4], int x, int y);
int		check_view_line(char tab[4][4], Case *ptr[4][4], int x, int y);
int		check_view_col(char tab[4][4], Case *ptr[4][4], int x, int y);
int		is_possible(char tab[4][4], Case *ptr[4][4], int x, int y, int n);
int		ft_format(char *str);
int		ft_strlen(char *str);
int		calc_view_col(int x, int y, int counter, char tab[4][4]);
int		calc_view_line(int x, int y, int counter, char tab[4][4]);
int		calc_view_line_rev(int x, int y, int counter, char tab[4][4]);
int		calc_view_col_rev(int x, int y, int counter, char tab[4][4]);
#endif
