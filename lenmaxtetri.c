/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenmaxtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:17:36 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/22 19:15:10 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*lenmaxtetri(int *tetri)
{
	int max[2];
	int i;

	if (!tetri)
		return (NULL);
	i = 0;
	max[1] = 0;
	while (tetri[i])
	{
		if (tetri[i] > max[1])
			max[1] = tetri[i];
		i++;
	}
	max[0] = i;
	if (max[1] == 3)
		max[1] = 2;
	else if (max[1] == 7)
		max[1] = 3;
	else if (max[1] == 15)
		max[1] = 4;
	return (max);
}
