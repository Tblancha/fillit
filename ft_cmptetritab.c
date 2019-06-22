/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmptetritab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:47:24 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/22 20:17:38 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_cmptetritab(int *tetri, int *tab, int minsquare, int *pos)
{
	int	i;
	int	*max;

	max = lenmaxtetri(tetri);
	i = 0;
	if (max[0] + pos[0] >= minsquare) //vertical
		return (0);
	if (max[1] + pos[1] >= minsquare) //horizontal
		return (0);
	while (tetri[i])
	{
		if (((tab[pos[0] + i] >> pos[1]) & tetri[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}
