/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:37:25 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/23 18:02:08 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

t_bord	play_game(t_bord game)
{
	int	index;
	int	i;

	i = 0;
	index = 0;
	index = check_for4s(game, index);
	if (index >= 0)
	{
		while (index >= 0)
		{
			printf("index = %i\n", index);
			game = print_4s(game, index);
			index = check_for4s(game, index + 1);
			i++;
			print_matrix(game);
		}
	}
	return (game);
}

void	rush01(char **av)
{
	t_bord	game;

	game.tab = ft_split(av[1], 32);
	if (check_arg(game.tab) == 1)
	{
		game = init_matrix(game);
		if (check_plate_is_doable(game) == 0)
			ft_putstr("Error1\n");
		game = play_game(game);
		print_matrix(game);
	}
	else
		ft_putstr("Error\n");
	free_game_tab(game.tab);
	free(*game.matrix.space);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		ft_putstr("Error\n");
	else
		rush01(av);
	return (0);
}