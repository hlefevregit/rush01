/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 20:20:33 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/23 20:48:39 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

t_bord	print_1s_col(t_bord game, int index)
{
	if (index <= 3 && game.matrix.space[index][0] == '0')
		game.matrix.space[index] = "4";
	if (index >= 4 && game.matrix.space[index + 8][0] == '0')
		game.matrix.space[index + 8] = "4";
	return (game);
}

t_bord	print_1s_raw(t_bord game, int index)
{
	if (index == 8 && game.matrix.space[0][0] == '0')
		game.matrix.space[0] = "4";
	if (index == 9 && game.matrix.space[4][0] == '0')
		game.matrix.space[4] = "4";
	if (index == 10 && game.matrix.space[8][0] == '0')
		game.matrix.space[8] = "4";
	if (index == 11 && game.matrix.space[12][0] == '0')
		game.matrix.space[12] = "4";
	if (index == 12 && game.matrix.space[3][0] == '0')
		game.matrix.space[3] = "4";
	if (index == 13 && game.matrix.space[7][0] == '0')
		game.matrix.space[7] = "4";
	if (index == 14 && game.matrix.space[11][0] == '0')
		game.matrix.space[11] = "4";
	if (index == 15 && game.matrix.space[15][0] == '0')
		game.matrix.space[15] = "4";
	return (game);
}

t_bord	print_1s(t_bord game, int index)
{
	if (index < 8)
		game = print_1s_col(game, index);
	if (index >= 8 && index <= 15)
		game = print_1s_raw(game, index);
	return (game);
}
