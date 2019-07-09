/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 00:35:28 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/09 03:42:41 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_fill	backtracking(t_fill fill)
{
	static int	i;

	while (fill.tetri[i])
	{
		if (!(fill.pos[i] = ft_newposition(fill, i)))
		{
			reinipos(fill, i);
			if (i > 0)
			{
				i--;
				fill.tab = ft_filltab(fill, i);
				fill.pos[i][1]++;
			}
			else
				fill.minsquare++;
		}
		else
		{
			fill.tab = ft_filltab(fill, i);
			i++;
		}
	}
	return (fill);
}
