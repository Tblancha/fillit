/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filltab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 08:02:25 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/01 19:51:42 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	*ft_filltab(t_fill fill, int n)
{
	int	i;

	i = 0;
	while (fill.tetri[n][i])
	{
		fill.tab[fill.pos[n][0] + i] = (fill.tab[fill.pos[n][0] + i]
			^ (fill.tetri[n][i] << fill.pos[n][1]));
		i++;
	}
	return (fill.tab);
}
