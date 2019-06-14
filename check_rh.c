/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 18:47:19 by tblancha          #+#    #+#             */
/*   Updated: 2019/05/31 17:25:32 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_rr(char *str)
{
	if (!ft_strcmp((const char*)str, "##..\n#...\n#...\n....\n")
			|| !ft_strcmp((const char*)str, ".##.\n.#..\n.#..\n....\n")
			|| !ft_strcmp((const char*)str, "..##\n..#.\n..#.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n##..\n#...\n#...\n")
			|| !ft_strcmp((const char*)str, "....\n.##.\n.#..\n.#..\n")
			|| !ft_strcmp((const char*)str, "....\n..##\n..#.\n..#.\n"))
		return (1);
	return (0);
}

static int		check_rl(char *str)
{
	if (!ft_strcmp((const char*)str, ".#..\n.#..\n##..\n....\n")
			|| !ft_strcmp((const char*)str, "..#.\n..#.\n.##.\n....\n")
			|| !ft_strcmp((const char*)str, "...#\n...#\n..##\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.#..\n.#..\n##..\n")
			|| !ft_strcmp((const char*)str, "....\n..#.\n..#.\n.##.\n")
			|| !ft_strcmp((const char*)str, "....\n...#\n...#\n..##\n"))
		return (1);
	return (0);
}

int				*check_rh(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_rr(str))
	{
		tetri[0] = 3;
		tetri[1] = 2;
		tetri[2] = 2;
		return (tetri);
	}
	if (check_rl(str))
	{
		tetri[0] = 1;
		tetri[1] = 1;
		tetri[2] = 3;
		return (tetri);
	}
	return (NULL);
}
