/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:23:38 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/06 05:47:37 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_tl(char *str)
{
	if (!ft_strcmp((const char*)str, ".#..\n##..\n.#..\n....\n")
			|| !ft_strcmp((const char*)str, "..#.\n.##.\n..#.\n....\n")
			|| !ft_strcmp((const char*)str, "...#\n..##\n...#\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.#..\n##..\n.#..\n")
			|| !ft_strcmp((const char*)str, "....\n..#.\n.##.\n..#.\n")
			|| !ft_strcmp((const char*)str, "....\n...#\n..##\n...#\n"))
		return (1);
	return (0);
}

static int		check_tr(char *str)
{
	if (!ft_strcmp((const char*)str, "#...\n##..\n#...\n....\n")
			|| !ft_strcmp((const char*)str, ".#..\n.##.\n.#..\n....\n")
			|| !ft_strcmp((const char*)str, "..#.\n..##\n..#.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n#...\n##..\n#...\n")
			|| !ft_strcmp((const char*)str, "....\n.#..\n.##.\n.#..\n")
			|| !ft_strcmp((const char*)str, "....\n..#.\n..##\n..#.\n"))
		return (1);
	return (0);
}

int				*check_tv(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_tl(str))
	{
		if (!(tetri = (int*)malloc(sizeof(int) * 4)))
			return (NULL);
		tetri[0] = 1;
		tetri[1] = 3;
		tetri[2] = 1;
		tetri[3] = 0;
		return (tetri);
	}
	if (check_tr(str))
	{
		if (!(tetri = (int*)malloc(sizeof(int) * 4)))
			return (NULL);
		tetri[0] = 2;
		tetri[1] = 3;
		tetri[2] = 2;
		tetri[3] = 0;
		return (tetri);
	}
	return (NULL);
}
