/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:37:25 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/22 21:22:45 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	play_game(t_bord *bord)
{
	
}

void	rush01(char **av)
{
	int		x;
	int		y;
	t_bord	*bord;

	x = 4;
	y = 4;
	if (check_arg(av) == 1)
	{
		init_bord(bord, av);
		if (check_plate_is_doable(bord) != 0)
			ft_putstr("Error\n");
		play_game(bord);
	}
	else
		ft_putstr("Error\n");
}

int	main(int ac, char **av)
{
	if (ac != 17)
		ft_putstr("Error\n");
	else
		rush01(av);
	return (0);
}