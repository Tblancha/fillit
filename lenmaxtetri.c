/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lenmaxtetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 11:17:36 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/02 05:12:11 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
static int	*onemaxtetri(int *tetri, int *max)
{
	int i;

	i = 0;
	if (!(max = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	max[1] = 1;
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

int			**lenmaxtetri(t_fill *fill)
{
	int	j;

	j = 0;
	if (!(fill->max = (int**)malloc(sizeof(int*) * fill->nbtetri)))
		return (NULL);
	while (j < fill->nbtetri)
	{
		fill->max[j] = onemaxtetri(fill->tetri[j], fill->max[j]);
		j++;
	}
	return (fill->max);
}
