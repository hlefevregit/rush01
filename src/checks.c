/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlefevre <hlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:07:38 by hlefevre          #+#    #+#             */
/*   Updated: 2024/03/22 21:21:20 by hlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_arg(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' && av[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sum(t_bord *bord)
{
	if (bord->col1up + bord->col1down > 5)
		return (0);
	if (bord->col2up + bord->col2down > 5)
		return (0);
	if (bord->col3up + bord->col3down > 5)
		return (0);
	if (bord->col4up + bord->col4down > 5)
		return (0);
	if (bord->raw1left + bord->raw1right > 5)
		return (0);
	if (bord->raw2left + bord->raw2right > 5)
		return (0);
	if (bord->raw3left + bord->raw3right > 5)
		return (0);
	if (bord->raw4left + bord->raw4right > 5)
		return (0);
	return (1);
}

int	check_good_value_col(t_bord *bord)
{
	if (bord->col1down < 1 || bord->col1down > 4)
		return (0);
	if (bord->col2down < 1 || bord->col2down > 4)
		return (0);
	if (bord->col3down < 1 || bord->col3down > 4)
		return (0);
	if (bord->col4down < 1 || bord->col4down > 4)
		return (0);
	if (bord->col2up < 1 || bord->col2up > 4)
		return (0);
	if (bord->col3up < 1 || bord->col3up > 4)
		return (0);
	if (bord->col4up < 1 || bord->col4up > 4)
		return (0);
	if (bord->col1up < 1 || bord->col1up > 4)
		return (0);
	return (1);
}

int	check_good_value_raw(t_bord *bord)
{
	if (bord->raw1left < 1 || bord->raw1left > 4)
		return (0);
	if (bord->raw2left < 1 || bord->raw2left > 4)
		return (0);
	if (bord->raw3left < 1 || bord->raw3left > 4)
		return (0);
	if (bord->raw4left < 1 || bord->raw4left > 4)
		return (0);
	if (bord->raw1right < 1 || bord->raw1right > 4)
		return (0);
	if (bord->raw2right < 1 || bord->raw2right > 4)
		return (0);
	if (bord->raw3right < 1 || bord->raw3right > 4)
		return (0);
	if (bord->raw4right < 1 || bord->raw4right > 4)
		return (0);
	return (1);
}

int	check_plate_is_doable(t_bord *bord)
{
	if (check_good_value_col(bord) == 0)
		return (0);
	if (check_good_value_raw(bord))
		return (0);
	if (check_sum(bord) == 0)
		return (0);
	return (1);
}
