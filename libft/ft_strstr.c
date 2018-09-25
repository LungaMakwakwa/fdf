/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 16:34:43 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/08 16:45:49 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t x;
	size_t y;

	x = 0;
	if (haystack[0] == '\0' && needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y] != '\0' && haystack[x + y] == needle[y])
			y++;
		if (needle[y] == '\0')
			return ((char *)&haystack[x]);
		x++;
	}
	return (0);
}
