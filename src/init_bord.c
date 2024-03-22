/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:53:34 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/22 20:58:59 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

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