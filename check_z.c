/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_z.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:05:35 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/15 06:19:40 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_zh(char *str)
{
	if (!ft_strcmp((const char*)str, "##..\n.##.\n....\n....\n")
			|| !ft_strcmp((const char*)str, ".##.\n..##\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n##..\n.##.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.##.\n..##\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n##..\n.##.\n")
			|| !ft_strcmp((const char*)str, "....\n....\n.##.\n..##\n"))
		return (1);
	return (0);
}

static int		check_zv(char *str)
{
	if (!ft_strcmp((const char*)str, ".#..\n##..\n#...\n....\n")
			|| !ft_strcmp((const char*)str, "..#.\n.##.\n.#..\n....\n")
			|| !ft_strcmp((const char*)str, "...#\n..##\n..#.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.#..\n##..\n#...\n")
			|| !ft_strcmp((const char*)str, "....\n..#.\n.##.\n.#..\n")
			|| !ft_strcmp((const char*)str, "....\n...#\n..##\n..#.\n"))
		return (1);
	return (0);
}

int				*check_z(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_zh(str))
	{
		if (!(tetri = (int*)malloc(sizeof(int) * 3)))
			return (NULL);
		tetri[0] = 6;
		tetri[1] = 3;
		tetri[2] = 0;
		return (tetri);
	}
	if (check_zv(str))
	{
		if (!(tetri = (int*)malloc(sizeof(int) * 4)))
			return (NULL);
		tetri[0] = 1;
		tetri[1] = 3;
		tetri[2] = 2;
		tetri[3] = 0;
		return (tetri);
	}
	return (NULL);
}
