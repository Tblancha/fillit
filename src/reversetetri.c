/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversetetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 22:57:24 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/02 01:34:34 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		*revtetri(int *tetri, int max)
{
	int	i;

	i = 0;
	while (tetri[i])
	{
		if (tetri[i] == 1 && max == 3)
			tetri[i] = 4;
		else if (tetri[i] == 1 && max == 2)
			tetri[i] = 2;
		else if (tetri[i] == 2 && max == 2)
			tetri[i] = 1;
		else if (tetri[i] == 3 && max == 3)
			tetri[i] = 6;
		else if (tetri[i] == 4 && max == 3)
			tetri[i] = 1;
		else if (tetri[i] == 6 && max == 3)
			tetri[i] = 3;
		i++;
	}
	return (tetri);
}

int				**reversetetri(int **tetri, int **max)
{
	int	i;

	i = 0;
	while (tetri[i])
	{
		tetri[i] = revtetri(tetri[i], max[i][1]);
		i++;
	}
	return (tetri);
}
