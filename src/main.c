/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 00:07:58 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/09 01:59:59 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	**tetriminos;
	int		i;
	t_fill	fill;

	i = 0;
	if (ac != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	if (!(tetriminos = recupdata(&av[1])))
	{
		ft_putstr("error\n");
		return (0);
	}
	if (!(fill.tetri = check_all(tetriminos)))
	{
		ft_putstr("error\n");
		return (0);
	}
	fill = initialization(&fill);
	fill.tetri = reversetetri(fill.tetri, fill.max);
	fill = backtracking(fill);
	ft_printfinaltab(fill);
	return (0);
}
