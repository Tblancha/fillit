/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfinaltab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 22:00:58 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/09 01:58:22 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		**inisquare(char **square, int minsquare)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(square = (char**)malloc(sizeof(char*) * (minsquare + 1))))
		return (NULL);
	while (i < minsquare)
	{
		if (!(square[i] = (char*)malloc(sizeof(char) * (minsquare + 1))))
			return (NULL);
		while (j < minsquare)
		{
			square[i][j] = '.';
			j++;
		}
		square[i][j] = '\0';
		j = 0;
		i++;
	}
	square[minsquare] = NULL;
	return (square);
}

static void		printfinal(char **square, int minsquare)
{
	int	i;

	i = 0;
	while (i < minsquare)
	{
		ft_putstr(square[i]);
		ft_putchar('\n');
		i++;
	}
}

static char		**tetriintab(char **square, int *tetri, int *pos, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tetri[i])
	{
		while ((tetri[i] >> j) > 0)
		{
			if ((tetri[i] >> j) % 2)
				square[pos[0] + i][pos[1] + j] = c;
			j++;
		}
		j = 0;
		i++;
	}
	return (square);
}

void			ft_printfinaltab(t_fill fill)
{
	int		i;
	char	**square;

	i = 0;
	square = NULL;
	square = inisquare(square, fill.minsquare);
	while (fill.tetri[i])
	{
		square = tetriintab(square, fill.tetri[i], fill.pos[i], (char)(i + 65));
		i++;
	}
	printfinal(square, fill.minsquare);
}
