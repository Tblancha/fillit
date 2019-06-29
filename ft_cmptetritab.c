/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmptetritab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:47:24 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/25 10:21:12 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_cmptetritab(t_fill fill, int n)
{
	int	i;

	i = 0;
	if (fill.max[n][0] + fill.pos[n][0] >= fill.minsquare) //vertical
		return (0);
	if (fill.max[n][1] + fill.pos[n][1] >= fill.minsquare) //horizontal
		return (0);
	while (fill.tetri[i])
	{
		if (((fill.tab[fill.pos[n][0] + i] >> fill.pos[n][1]) & fill.tetri[n][i]) > 0)
			return (0);
		i++;
	}
	return (1);
}

//Jai meme pas besoin de decaler je crois. Il suffit que tab + tetri = tab ^ tetri
//Ca fait pas de boucle donc plus rapide
