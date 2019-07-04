/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbtetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 04:38:24 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/02 04:41:54 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_nbtetri(int **tetri)
{
	int i;

	i = 0;
	if (!tetri)
		return (0);
	while (tetri[i])
		i++;
	return (i);
}
