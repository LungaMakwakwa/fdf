/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:39:27 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/04 13:56:43 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	char	*str;
	size_t	len;

	len = ft_strlen(s) + 1;
	chr = (char)c;
	str = (char *)s;
	while (len > 0)
	{
		len--;
		if (str[len] == chr)
		{
			return (str + len);
		}
	}
	return (0);
}
