/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 06:28:41 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/25 12:45:27 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_fill		initialization(t_fill *fill)
{
	int i;

	i = 0;
	fill->nbtetri = ft_nbtetri(fill->tetri);
	fill->minsquare = ft_minsquare(fill->nbtetri);
	fill->max = lenmaxtetri(fill->tetri, fill->nbtetri);
	if (!(fill->tab = (int*)malloc(sizeof(int) * 16)))
		return (*fill);
	if (!(fill->pos = (int**)malloc(sizeof(int*) * fill->nbtetri)))
		return (*fill);
	while (i < 16)
		fill->tab[i++] = 0;
	i = 0;
	while (i < fill->nbtetri)
	{
		if (!(fill->pos[i] = (int*)malloc(sizeof(int) * 2)))
			return (*fill);
		fill->pos[i][0] = 0;
		fill->pos[i][1] = 0;
		i++;
	}

	return (*fill);
}
