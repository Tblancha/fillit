/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:54:44 by tblancha          #+#    #+#             */
/*   Updated: 2019/05/31 17:25:32 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		check_ol(char *str)
{
	if (!ft_strcmp((const char*)str, "##..\n##..\n....\n....\n")
			|| !ft_strcmp((const char*)str, ".##.\n.##.\n....\n....\n")
			|| !ft_strcmp((const char*)str, "..##\n..##\n....\n....\n")
			|| !ft_strcmp((const char*)str, "....\n##..\n##..\n....\n")
			|| !ft_strcmp((const char*)str, "....\n.##.\n.##.\n....\n")
			|| !ft_strcmp((const char*)str, "....\n..##\n..##\n....\n")
			|| !ft_strcmp((const char*)str, "....\n....\n##..\n##..\n")
			|| !ft_strcmp((const char*)str, "....\n....\n.##.\n.##.\n")
			|| !ft_strcmp((const char*)str, "....\n....\n..##\n..##\n"))
		return (1);
	return (0);
}

int				*check_o(char *str)
{
	int	*tetri;

	tetri = NULL;
	if (check_ol(str))
	{
		tetri[0] = 3;
		tetri[1] = 3;
		return (tetri);
	}
	return (NULL);
}
