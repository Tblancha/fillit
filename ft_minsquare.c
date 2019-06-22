/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minsquare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 04:35:13 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/22 04:51:41 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_minsquare(int nbtetri)
{
	int	minline;

	minline = 2;
	while (ft_pow(minline, 2) < (nbtetri * 4))
		minline++;
	return (minline);
}
