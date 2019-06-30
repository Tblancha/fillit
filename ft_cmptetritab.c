/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmptetritab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:47:24 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/30 07:05:21 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		cmpvertical(t_fill fill, int n)
{
	if (fill.max[n][0] + fill.pos[n][0] > fill.minsquare)
		return (0);
	return (1);
}

static int		cmphorizontal(t_fill fill, int n)
{
	if (fill.max[n][1] + fill.pos[n][1] > fill.minsquare)
		return (0);
	return (1);
}

int				ft_cmptetritab(t_fill fill, int n)
{
	int	i;

	i = 0;
	if (!cmpvertical(fill, n))
		return (0);
	if (!cmphorizontal(fill, n))
		return (0);
	while (fill.tetri[n][i])
	{
		if ((fill.tab[fill.pos[n][0] + i] + fill.tetri[n][i])
				!= (fill.tab[fill.pos[n][0] + i] ^ fill.tetri[n][i]))
			return (0);
		i++;
	}
	return (1);
}
