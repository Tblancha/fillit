/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recupdata.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 05:10:25 by tblancha          #+#    #+#             */
/*   Updated: 2019/07/06 00:42:07 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		checkrecup(char **str, char ***tetriminos)
{
	int fd;

	if (!str)
		return (-1);
	fd = open(*str, O_RDONLY);
	if (fd < 1)
		return (-1);
	if (!(*tetriminos = (char**)malloc(sizeof(char*) * 26 + 1)))
		return (-1);
	if (!(*tetriminos[0] = (char*)malloc(sizeof(char) * 20 + 1)))
		return (-1);
	return (fd);
}

char			**recupdata(char **str)
{
	int		fd;
	char	**tetriminos;
	int		ret;
	int		i;

	i = 0;
	if ((fd = checkrecup(str, &tetriminos)) < 0)
		return (NULL);
	while ((ret = read(fd, tetriminos[i], 21)) > 0)
	{
		if (ret == 21 && tetriminos[i][20] == '\n')
			tetriminos[i][20] = '\0';
		else if (ret == 20)
			break ;
		else
			return (NULL);
		i++;
		if (!(tetriminos[i] = (char*)malloc(sizeof(char) * 20 + 1)))
			return (NULL);
	}
	tetriminos[i][20] = '\0';
	if (i > 26)
		return (NULL);
	tetriminos[i + 1] = NULL;
	return (tetriminos);
}
