/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 19:03:58 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/15 04:57:22 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_ld(char *str)
{
	if (!ft_strcmp((const char*)str, "###.\n#...\n....\n....\n")
			|| !ft_strcmp((const char*)str, ".###\n.#..\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n###.\n#...\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.###\n.#..\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n###.\n#...\n")
			|| !ft_strcmp((const char*)str, "....\n....\n.###\n.#..\n"))
		return (1);
	return (0);
}

static int		check_lu(char *str)
{
	if (!ft_strcmp((const char*)str, "..#.\n###.\n....\n....\n")
			|| !ft_strcmp((const char*)str, "...#\n.###\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n..#.\n###.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n...#\n.###\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n..#.\n###.\n")
			|| !ft_strcmp((const char*)str, "....\n....\n...#\n.###\n"))
		return (1);
	return (0);
}

int				*check_lv(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_ld(str))
	{
		if (!(tetri = (int*)malloc(sizeof(int) * 3)))
			return (NULL);
		tetri[0] = 7;
		tetri[1] = 4;
		tetri[2] = 0;
		return (tetri);
	}
	if (check_lu(str))
	{
		if (!(tetri = (int*)malloc(sizeof(int) * 3)))
			return (NULL);
		tetri[0] = 1;
		tetri[1] = 7;
		tetri[2] = 0;
		return (tetri);
	}
	return (NULL);
}
