/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newposition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 05:37:05 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/30 17:57:10 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

static int	*searchzero(t_fill fill, int n)
{
	while (fill.pos[n][0] <= (fill.minsquare - fill.max[n][0]))
	{
		while (fill.pos[n][1] <= (fill.minsquare - fill.max[n][1]))
		{
			if ((fill.tab[fill.pos[n][0]] >> fill.pos[n][1]) % 2 == 0)
				return (fill.pos[n]);
			fill.pos[n][1]++;
			printf("\nLA\nfill.pos[n][1] = %d\nLA\n", fill.pos[n][1]);
		}
		fill.pos[n][1] = 0;
		fill.pos[n][0]++;
	}
	return (NULL);
}

int			*ft_newposition(t_fill fill, int n)
{
	fill.pos[n] = searchzero(fill, n);
	while (fill.pos[n] != NULL)
	{
		if (ft_cmptetritab(fill, n))
			return (fill.pos[n]);
		fill.pos[n][1]++;
		fill.pos[n] = searchzero(fill, n);
	}
	return (NULL);
}
// Je voulais juste trouver un 0, puis c'est parti en couille
// Maintenant je veux verifier si le tetri rentre horizontalement, verticalement
// et si ya bien pas de 1 sur toute les cases.
