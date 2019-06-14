/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:37:23 by tblancha          #+#    #+#             */
/*   Updated: 2019/05/31 17:25:32 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_ih(char *str)
{
	if (!ft_strcmp((const char*)str, "####\n....\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n####\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n####\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n....\n####\n"))
		return (1);
	return (0);
}

static int		check_iv(char *str)
{
	if (!ft_strcmp((const char*)str, "#...\n#...\n#...\n#...\n")
			|| !ft_strcmp((const char*)str, ".#..\n.#..\n.#..\n.#..\n")
			|| !ft_strcmp((const char*)str, "..#.\n..#.\n..#.\n..#.\n")
			|| !ft_strcmp((const char*)str, "...#\n...#\n...#\n...#\n"))
		return (1);
	return (0);
}

int				*check_i(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_ih(str))
	{
		tetri[0] = 15;
		return (tetri);
	}
	if (check_iv(str))
	{
		tetri[0] = 1;
		tetri[1] = 1;
		tetri[2] = 1;
		tetri[3] = 1;
		return (tetri);
	}
	return (NULL);
}
