/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newposition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 05:37:05 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/22 06:33:28 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	*taillemaxtetri(int *tetri)
{
	int	*max;

	if (!(max = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	max
}

static int	enoughplace(int *tab, int minsquare, int *tetri, int *pos)
{
	int	max_h;
	int	max_v;

	
}

static int	*searchzero(int *tab, int minsquare)
{
	static int	i;
	static int	j;
	int			*pos;

	if (!(pos = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	while (j < minsquare)
	{
		while (i < minsquare)
		{
			if ((tab[j] >> i) % 2 == 0)
			{
				pos[0] = j;
				pos[1] = i;
				return (pos);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (NULL);
}

int			*ft_newposition(int *tab, int minsquare, int *tetri)
{
	int	i;
	int	j;
	int	*pos;

	i = 0;
	j = 0;
	if (!(pos = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	pos = searchzero(tab, minsquare);
	while (pos != NULL && 
	while (
	return (NULL);
}
// Je voulais juste trouver un 0, puis c'est parti en couille
// Maintenant je veux verifier si le tetri rentre horizontalement, verticalement
// et si ya bien pas de 1 sur toute les cases.
