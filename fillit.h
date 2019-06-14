/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:48:43 by tblancha          #+#    #+#             */
/*   Updated: 2019/06/14 06:02:09 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		*check_i(char *str);
int		*check_lh(char *str);
int		*check_lv(char *str);
int		*check_o(char *str);
int		*check_rh(char *str);
int		*check_rv(char *str);
int		*check_s(char *str);
int		*check_th(char *str);
int		*check_tv(char *str);
int		*check_z(char *str);
char	**recupdata(char **str);

#endif
