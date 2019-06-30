/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinipos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 09:52:47 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/30 09:56:59 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*reinipos(t_fill fill, int n)
{
	if (!(fill.pos[n] = (int*)malloc(sizeof(int) * 2)))
		return (NULL);
	fill.pos[n][0] = 0;
	fill.pos[n][1] = 0;
	return (fill.pos[n]);
}
