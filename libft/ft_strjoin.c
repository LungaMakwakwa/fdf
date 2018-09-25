/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:39:41 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/11 16:37:05 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	size_t	lens;
	char	*str;

	x = 0;
	y = 0;
	if (!s1 || !s2)
		return (0);
	lens = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * lens);
	if (!str)
		return (0);
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		str[x++] = s2[y++];
	}
	str[x] = '\0';
	return (str);
}
