/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:37:30 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/12 16:11:33 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
