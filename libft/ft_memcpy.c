/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:46:25 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/01 12:02:00 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	char		*dest;
	const char	*source;
	int			x;

	i = 0;
	dest = (char *)dst;
	source = (const char *)src;
	x = (int)n;
	while (i < x)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
