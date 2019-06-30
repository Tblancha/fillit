/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 00:07:58 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/30 17:54:13 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int main(int ac, char **av)
{
	char	**tetriminos;
	int		i;
	int		j;
	t_fill	fill;

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
	fill.tetri = check_all(tetriminos);
	if (fill.tetri == NULL)
	{
		printf("tetri est vide, donc au moins une piece est fausse\n");
		return (0);
	}
	else
	{
		while (fill.tetri[i])
		{
			while (fill.tetri[i][j])
			{
				printf("tetri[%d][%d] = %d\n", i, j, fill.tetri[i][j]);
				j++;
			}
			printf("\n");
			i++;
			j = 0;
		}
	}





	i = 0;
	j = 0;
	fill = initialization(&fill);
	printf("\ntetri est rempli, on check nbtetri et minsquare\n");
	printf("nbtetri = %d\n", fill.nbtetri);
	printf("minsquare = %d\n\n", fill.minsquare);




	printf("Les tetri en int, avec la taille max\n");
	while (i < fill.nbtetri)
	{
		while (fill.tetri[i][j])
		{
			printf("tetri[%d][%d] = %d\n", i, j, fill.tetri[i][j]);
			j++;
		}
		printf("\nmax vertical = %d\nmax horizontal = %d\n", fill.max[i][0], fill.max[i][1]);
		printf("pos de base = %d, %d\n\n", fill.pos[i][0], fill.pos[i][1]);
		i++;
		j = 0;
	}




	//	fill.tab[0] = 31;
	//	fill.tab[1] = 15;
	//	fill.tab[2] = 15;
	fill.pos[0] = ft_newposition(fill, 0);
	if (fill.pos[0])
		printf("pos[0] = %d\npos[1] = %d\n", fill.pos[0][0], fill.pos[0][1]);
	else
		printf("newposition ret NULL car minsquare est trop petit surement\n");






	printf("\n\n\nTest de filltab\n\n");
	if (fill.pos[0])
		fill.tab = ft_filltab(fill, 0);
	i = 0;
	while (fill.tab[i])
	{
		printf("tab[%d] = %d\n", i, fill.tab[0]);
		i++;
	}	
	i = 0;
	while (fill.tab[i])
	{
		ft_printbit(fill.tab[i]);
		i++;
	}
	return (0);
}
