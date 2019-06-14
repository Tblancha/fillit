/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 19:03:58 by tblancha          #+#    #+#             */
/*   Updated: 2019/05/31 17:25:32 by tblancha         ###   ########.fr       */
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
		tetri[0] = 7;
		tetri[1] = 4;
		return (tetri);
	}
	if (check_lu(str))
	{
		tetri[0] = 1;
		tetri[1] = 7;
		return (tetri);
	}
	return (NULL);
}
