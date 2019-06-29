/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenmaxtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:17:36 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/25 10:29:29 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	*onemaxtetri(int *tetri)
{
	int i;
	int	*max;

	i = 0;
	if (!(max = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	while (tetri[i])
	{
		if (tetri[i] > max[1])
			max[1] = tetri[i];
		i++;
	}
	max[0] = i;
	if (max[1] == 1)
		return (max);
	else if (max[1] <= 3)
		max[1] = 2;
	else if (max[1] <= 7)
		max[1] = 3;
	else
		max[1] = 4;
	return (max);
}

int			**lenmaxtetri(int **tetri, int nbtetri)
{
	int **max;
	int	j;

	if (!tetri)
		return (NULL);
	j = 0;
	if (!(max = (int**)malloc(sizeof(int*) * nbtetri)))
		return (NULL);
	max[1] = 0;
	while (j < nbtetri)
	{
		max[j] = onemaxtetri(tetri[j]);
		j++;
	}
	return (max);
}
