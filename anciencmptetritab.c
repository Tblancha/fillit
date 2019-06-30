/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmptetritab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 18:47:24 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/30 03:27:54 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
int		ft_cmptetritab(t_fill fill, int n)
{
	int	i;

	i = 0;
	printf("cmptetritab\n");
	if (fill.max[n][0] + fill.pos[n][0] > fill.minsquare) //vertical
	{
		printf("C'est vraiment verticalement que ca passe pas?");
		return (0);
	}
	printf("verif vertical: ok\n");
	if (fill.max[n][1] + fill.pos[n][1] > fill.minsquare) //horizontal
		return (0);
	printf("verif horizontal: ok\n");
	while (fill.tetri[i])
	{
		if (((fill.tab[fill.pos[n][0] + i] >> fill.pos[n][1]) & fill.tetri[n][i]) > 0)
		{
			printf("return 0 dans cmptetritab\n");
			return (0);
		}
		i++;
	}
	printf("end cmptetritab: OK\n");
	return (1);
}

//Jai meme pas besoin de decaler je crois. Il suffit que tab + tetri = tab ^ tetri
//Ca fait pas de boucle donc plus rapide
