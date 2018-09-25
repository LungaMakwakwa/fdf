/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:14:30 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/06 16:52:16 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	chr;
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	chr = (char)c;
	str = (char *)s;
	while (i <= len)
	{
		if (str[i] == chr)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
