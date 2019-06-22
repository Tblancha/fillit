/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newposition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 05:37:05 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/22 20:24:32 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	*searchzero(int *tab, int minsquare)
{
	static int	i = -1;
	static int	j;
	int			pos[2];

	while (j < minsquare)
	{
		while (i < minsquare)
		{
			i++;
			if ((tab[j] >> i) % 2 == 0)
			{
				pos[0] = j;
				pos[1] = i;
				return (pos);
			}
		}
		i = -1;
		j++;
	}
	return (NULL);
}

int			*ft_newposition(int *tab, int minsquare, int *tetri)
{
	int	*pos;

	i = 0;
	j = 0;
	pos = searchzero(tab, minsquare);
	while (pos != NULL)
	{
		if (ft_cmptetritab(tetri, tab, minsquare, pos))
			return (pos);
		pos = searchzero(tab, minsquare);
	}
	return (NULL);
}
// Je voulais juste trouver un 0, puis c'est parti en couille
// Maintenant je veux verifier si le tetri rentre horizontalement, verticalement
// et si ya bien pas de 1 sur toute les cases.
