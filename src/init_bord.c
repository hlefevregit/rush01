/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:34 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/22 21:37:18 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void    init_matrix(t_bord *bord)
{
    bord->matrix->space1 = '0';
    bord->matrix->space2 = '0';
    bord->matrix->space3 = '0';
    bord->matrix->space4 = '0';
    bord->matrix->space5 = '0';
    bord->matrix->space7 = '0';
    bord->matrix->space8 = '0';
    bord->matrix->space9 = '0';
    bord->matrix->space10 = '0';
    bord->matrix->space11 = '0';
    bord->matrix->space12 = '0';
    bord->matrix->space13 = '0';
    bord->matrix->space14 = '0';
    bord->matrix->space15 = '0';
    bord->matrix->space16 = '0';
}

void    init_bord(t_bord *game, char **av)
{
    game->col1up = ft_atoi(av[1]);
    game->col2up = ft_atoi(av[2]);
    game->col3up = ft_atoi(av[3]);
    game->col4up = ft_atoi(av[4]);
    game->col1down = ft_atoi(av[5]);
    game->col2down = ft_atoi(av[6]);
    game->col3down = ft_atoi(av[7]);
    game->col4down = ft_atoi(av[8]);
    game->raw1left = ft_atoi(av[9]);
    game->raw2left = ft_atoi(av[10]);
    game->raw3left = ft_atoi(av[11]);
    game->raw4left = ft_atoi(av[12]);
    game->raw1right = ft_atoi(av[13]);
    game->raw2right = ft_atoi(av[14]);
    game->raw3right = ft_atoi(av[15]);
    game->raw4right = ft_atoi(av[16]);
}