/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:40:03 by tblancha          #+#    #+#             */
/*   Updated: 2019/05/31 17:22:20 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		*check1(char *str)
{
	int	i;
	int	*tetri;

	i = 0;
	tetri = NULL;
	if ((tetri = check_i(str)) != NULL)
		return (tetri);
	else if ((tetri = check_lh(str)) != NULL)
		return (tetri);
	else if ((tetri = check_lv(str)) != NULL)
		return (tetri);
	else if ((tetri = check_o(str)) != NULL)
		return (tetri);
	else if ((tetri = check_rh(str)) != NULL)
		return (tetri);
	else
		return (NULL);
}

static int		*check2(char *str)
{
	int	i;
	int	*tetri;

	i = 0;
	tetri = NULL;
	if ((tetri = check_rv(str)) != NULL)
		return (tetri);
	else if ((tetri = check_s(str)) != NULL)
		return (tetri);
	else if ((tetri = check_th(str)) != NULL)
		return (tetri);
	else if ((tetri = check_tv(str)) != NULL)
		return (tetri);
	else if ((tetri = check_z(str)) != NULL)
		return (tetri);
	else
		return (NULL);
}

int				**check_all(char **tetriminos)
{
	int		**tetri;
	int		i;

	i = 0;
	tetri = NULL;
	while (tetriminos[i])
	{
		tetri[i] = check1(tetriminos[i]);
		if (tetri[i] == NULL)
			tetri[i] = check2(tetriminos[i]);
		if (tetri[i] == NULL)
			return (NULL);
		i++;
	}
	return (NULL);
}
