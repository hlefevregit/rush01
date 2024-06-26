/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_numbers4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:44:39 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/23 15:14:55 by hulefevr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

t_bord	print_4s_col(t_bord game, int index)
{
	if (index <= 3)
	{
		game.matrix.space[index] = "1";
		game.matrix.space[index + 4] = "2";
		game.matrix.space[index + 8] = "3";
		game.matrix.space[index + 12] = "4";
	}
	if (index >= 4 && index <= 7)
	{
		game.matrix.space[index + 8] = "1";
		game.matrix.space[index + 4] = "2";
		game.matrix.space[index + 0] = "3";
		game.matrix.space[index - 4] = "4";
	}
	return (game);
}

t_bord	print4raws_part2(t_bord game, int index)
{
	if (index == 12)
	{
		game.matrix.space[index - 9] = "1";
		game.matrix.space[index - 10] = "2";
		game.matrix.space[index - 11] = "3";
		game.matrix.space[index - 12] = "4";
	}
	if (index == 13)
	{
		game.matrix.space[index - 6] = "1";
		game.matrix.space[index - 7] = "2";
		game.matrix.space[index - 8] = "3";
		game.matrix.space[index - 9] = "4";
	}
	if (index == 14)
	{
		game.matrix.space[index - 3] = "1";
		game.matrix.space[index - 4] = "2";
		game.matrix.space[index - 5] = "3";
		game.matrix.space[index - 6] = "4";
	}
	if (index == 15)
	{
		game.matrix.space[index] = "1";
		game.matrix.space[index - 1] = "2";
		game.matrix.space[index - 2] = "3";
		game.matrix.space[index - 3] = "4";
	}
	return (game);
}

t_bord	print_4s_raw(t_bord game, int index)
{
	if (index == 8)
	{
		game.matrix.space[0] = "1";
		game.matrix.space[1] = "2";
		game.matrix.space[2] = "3";
		game.matrix.space[3] = "4";
	}
	if (index == 9)
	{
		game.matrix.space[4] = "1";
		game.matrix.space[5] = "2";
		game.matrix.space[6] = "3";
		game.matrix.space[7] = "4";
	}
	if (index == 10)
	{
		game.matrix.space[8] = "1";
		game.matrix.space[9] = "2";
		game.matrix.space[10] = "3";
		game.matrix.space[11] = "4";
	}
	if (index == 11)
	{
		game.matrix.space[12] = "1";
		game.matrix.space[13] = "2";
		game.matrix.space[14] = "3";
		game.matrix.space[15] = "4";
	}
	game = print4raws_part2(game, index);
	return (game);
}

t_bord	print_4s(t_bord game, int index)
{
	if (index < 8)
		game = print_4s_col(game, index);
	if (index >= 8 && index <= 15)
		game = print_4s_raw(game, index);
	return (game);
}