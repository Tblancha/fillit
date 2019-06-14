/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblancha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 15:01:15 by tblancha          #+#    #+#             */
/*   Updated: 2019/04/29 01:42:16 by tblancha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*str;
	size_t	len;

	if (!ptr)
		return (NULL);
	len = ft_strlen((char*)ptr);
	str = NULL;
	if (!(str = ft_memcpy(str, ptr, len)))
		return (NULL);
	if (!(ptr = ft_memalloc(len + size + 1)))
		return (NULL);
	ft_memcpy(ptr, str, len);
	return (ptr);
}
