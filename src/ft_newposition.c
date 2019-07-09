/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newposition.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 05:37:05 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/09 01:57:56 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			*ft_newposition(t_fill fill, int n)
{
	while (fill.pos[n][0] < fill.minsquare)
	{
		if (ft_cmptetritab(fill, n))
			return (fill.pos[n]);
		fill.pos[n][1]++;
		if (fill.pos[n][1] >= fill.minsquare)
		{
			fill.pos[n][1] = 0;
			fill.pos[n][0]++;
		}
	}
	return (NULL);
}
