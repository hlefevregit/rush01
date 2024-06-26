/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_checks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:38:17 by hulefevr          #+#    #+#             */
/*   Updated: 2024/03/23 20:37:35 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_for4s(t_bord game, int i)
{
	while (game.tab[i])
	{
		if (game.tab[i][0] == '4')
			return (i);
		i++;
	}
	return (-1);
}

int	check_for1s(t_bord game, int i)
{
	while (game.tab[i])
	{
		if (game.tab[i][0] == '1')
			return (i);
		i++;
	}
	return (-1);
}