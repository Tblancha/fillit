/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 00:07:58 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/15 05:57:26 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char	**tetriminos;
	int		i;
	int		j;
	int		**tetri;

	if (ac != 2)
	{
		printf("ils faut 1 argument: le fichier tetriminos\n");
		return (0);
	}
	i = 0;
	j = 0;
	tetriminos = recupdata(&av[1]);
	if (!tetriminos)
		return (0);
	while (tetriminos[i] != NULL)
		printf("%s|\n", tetriminos[i++]);
	if (i == 0)
		printf("fichier non conforme\n");
	i = 0;
	tetri = check_all(tetriminos);
	if (tetri == NULL)
	{
		printf("tetri est vide, donc au moins une piece est fausse\n");
		return (0);
	}
	else
	{
		while (tetri[i])
		{
			while (tetri[i][j])
			{
				printf("tetri[%d][%d] = %d\n", i, j, tetri[i][j]);
				j++;
			}
			printf("\n");
			i++;
			j = 0;
		}
	}
	return (0);
}
