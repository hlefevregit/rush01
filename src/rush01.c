/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:37:25 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/22 21:43:22 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	play_game(t_bord *bord, char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i][0] == '4')
			return (i);
	}
}

void	rush01(char **av)
{
	t_bord	*bord;

	if (check_arg(av) == 1)
	{
		init_bord(bord, av);
		init_matrix(bord);
		if (check_plate_is_doable(bord) != 0)
			ft_putstr("Error\n");
		play_game(bord, av);
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