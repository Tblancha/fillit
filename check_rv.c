/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 18:47:19 by tblancha          #+#    #+#             */
/*   Updated: 2019/05/31 17:25:32 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_rd(char *str)
{
	if (!ft_strcmp((const char*)str, "###.\n..#.\n....\n....\n")
			|| !ft_strcmp((const char*)str, ".###\n...#\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n###.\n..#.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.###\n...#\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n###.\n..#.\n")
			|| !ft_strcmp((const char*)str, "....\n....\n.###\n...#\n"))
		return (1);
	return (0);
}

static int		check_ru(char *str)
{
	if (!ft_strcmp((const char*)str, "#...\n###.\n....\n....\n")
			|| !ft_strcmp((const char*)str, ".#..\n.###\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n#...\n###.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.#..\n.###\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n#...\n###.\n")
			|| !ft_strcmp((const char*)str, "....\n....\n.#..\n.###\n"))
		return (1);
	return (0);
}

int				*check_rv(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_rd(str))
	{
		tetri[0] = 7;
		tetri[1] = 1;
		return (tetri);
	}
	if (check_ru(str))
	{
		tetri[0] = 4;
		tetri[1] = 7;
		return (tetri);
	}
	return (NULL);
}
