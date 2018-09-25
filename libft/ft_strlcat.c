/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:34:14 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/12 15:15:56 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t y;
	size_t destlen;
	size_t sourcelen;
	size_t res;

	y = 0;
	destlen = ft_strlen(dest);
	sourcelen = ft_strlen(src);
	res = sourcelen + destlen;
	if (dstsize < destlen)
		return (sourcelen + dstsize);
	while (src[y] && (dstsize > destlen + 1))
		dest[destlen++] = src[y++];
	dest[destlen] = '\0';
	return (res);
}
