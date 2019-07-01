/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newposition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 05:37:05 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/30 20:02:21 by tblancha         ###   ########.fr       */
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
