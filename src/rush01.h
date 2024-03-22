/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:38:02 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/22 21:37:30 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct s_matrix
{
	char	space1;
	char	space2;
	char	space3;
	char	space4;
	char	space5;
	char	space6;
	char	space7;
	char	space8;
	char	space9;
	char	space10;
	char	space11;
	char	space12;
	char	space13;
	char	space14;
	char	space15;
	char	space16;
}		t_matrix;

typedef struct s_bord
{
	int	col1up;
	int	col2up;
	int	col3up;
	int	col4up;
	int	col1down;
	int	col2down;
	int	col3down;
	int	col4down;
	int	raw1left;
	int	raw2left;
	int	raw3left;
	int	raw4left;
	int	raw1right;
	int	raw2right;
	int	raw3right;
	int	raw4right;

	t_matrix	*matrix;
}		t_bord;

/***************** RUSH01 ****************/

void    init_bord(t_bord *game, char **av);
void    init_matrix(t_bord *bord);
void	play_game(t_bord *bord);

int		check_arg(char **av);
int		check_plate_is_doable(t_bord *bord);
int		check_sum(t_bord *bord);
int		check_good_value_col(t_bord *bord);
int		check_good_value_raw(t_bord *bord);

/*****************************************/

/***************** LIBFT *****************/

int		ft_atoi(const char *str);

void	ft_putstr(char *str);
void	ft_putchar(char c);

/*****************************************/

#endif