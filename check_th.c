/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_th.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:15:49 by tblancha          #+#    #+#             */
/*   Updated: 2019/05/31 17:25:32 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_td(char *str)
{
	if (!ft_strcmp((const char*)str, "###.\n.#..\n....\n....\n")
			|| !ft_strcmp((const char*)str, ".###\n..#.\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n###.\n.#..\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.###\n..#.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n###.\n.#..\n")
			|| !ft_strcmp((const char*)str, "....\n....\n.###\n..#.\n"))
		return (1);
	return (0);
}

static int		check_tu(char *str)
{
	if (!ft_strcmp((const char*)str, ".#..\n###.\n....\n....\n")
			|| !ft_strcmp((const char*)str, "..#.\n.###\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.#..\n###.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n..#.\n.###\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n.#..\n###.\n")
			|| !ft_strcmp((const char*)str, "....\n....\n..#.\n.###\n"))
		return (1);
	return (0);
}

int				*check_th(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_td(str))
	{
		tetri[0] = 7;
		tetri[1] = 2;
		return (tetri);
	}
	if (check_tu(str))
	{
		tetri[0] = 2;
		tetri[1] = 7;
		return (tetri);
	}
	return (NULL);
}
