/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 00:07:58 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/14 05:50:15 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	char	**tetriminos;
	int		i;

	if (ac != 2)
	{
		printf("ils faut 1 argument: le fichier tetriminos");
		return (0);
	}
	i = 0;
	tetriminos = recupdata2(&av[1]);
	if (!tetriminos)
		return (0);
	while (tetriminos[i] != NULL)
		printf("%s\n\n", tetriminos[i++]);
	if (i == 0)
		printf("fichier non conforme");
	write(1, "FIN\n", 4);
	return (0);
}
