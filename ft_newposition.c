/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newposition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 05:37:05 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/06 05:48:44 by tblancha         ###   ########.fr       */
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
		}
		fill.pos[n][1] = 0;
		fill.pos[n][0]++;
	}
	return (NULL);
}

/*static int	reajuste(t_fill fill, int n)
{
	if (fill.tetri[n][0] == 2 || fill.tetri[n][0] == 6)
		fill.pos[n][1] -= 1;
	else if	(fill.tetri[n][0] == 4)
		fill.pos[n][1] -= 2;
	return (fill.pos[n][1]);
}

static int	reajuste2(t_fill fill, int n)
{
	if (fill.tetri[n][0] == 2 || fill.tetri[n][0] == 6)
		fill.pos[n][1] += 1;
	else if	(fill.tetri[n][0] == 4)
		fill.pos[n][1] += 2;
	return (fill.pos[n][1]);
}
*/
int			*ft_newposition(t_fill fill, int n)
{
	fill.pos[n] = searchzero(fill, n);
	while (fill.pos[n] != NULL)
	{
//		fill.pos[n][1] = reajuste(fill, n);
		if (ft_cmptetritab(fill, n))
			return (fill.pos[n]);
//		fill.pos[n][1] = reajuste2(fill, n);
		fill.pos[n][1]++;
		fill.pos[n] = searchzero(fill, n);
	}
	return (NULL);
}
