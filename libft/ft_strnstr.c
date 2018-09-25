/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 18:12:25 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/08 16:45:52 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t x;
	size_t y;

	x = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x] && (x + ft_strlen(needle) <= len))
	{
		y = 0;
		while (haystack[x + y] == needle[y])
		{
			if (y == ft_strlen(needle) - 1)
				return ((char*)&haystack[x]);
			y++;
		}
		x++;
	}
	return (0);
}
