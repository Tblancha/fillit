/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 16:32:40 by tblancha          #+#    #+#             */
/*   Updated: 2019/05/31 17:25:32 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_sh(char *str)
{
	if (!ft_strcmp((const char*)str, ".##.\n##..\n....\n....\n")
			|| !ft_strcmp((const char*)str, "..##\n.##.\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.##.\n##..\n....\n")
			|| !ft_strcmp((const char*)str, "....\n..##\n.##.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n.##.\n##..\n")
			|| !ft_strcmp((const char*)str, "....\n....\n..##\n.##.\n"))
		return (1);
	return (0);
}

static int		check_sv(char *str)
{
	if (!ft_strcmp((const char*)str, "#...\n##..\n.#..\n....\n")
			|| !ft_strcmp((const char*)str, ".#..\n.##.\n..#.\n....\n")
			|| !ft_strcmp((const char*)str, "..#.\n..##\n...#\n....\n")
			|| !ft_strcmp((const char*)str, "....\n#...\n##..\n.#..\n")
			|| !ft_strcmp((const char*)str, "....\n.#..\n.##.\n..#.\n")
			|| !ft_strcmp((const char*)str, "....\n..#.\n..##\n...#\n"))
		return (1);
	return (0);
}

int				*check_s(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_sh(str))
	{
		tetri[0] = 3;
		tetri[1] = 6;
		return (tetri);
	}
	if (check_sv(str))
	{
		tetri[0] = 2;
		tetri[1] = 3;
		tetri[2] = 1;
		return (tetri);
	}
	return (NULL);
}
