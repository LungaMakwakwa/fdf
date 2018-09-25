/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 15:30:40 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/12 17:37:55 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		x;
	int		y;
	int		len;
	char	*str;

	x = 0;
	y = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s) - 1;
	while (s[x] == '\t' || s[x] == ' ' || s[x] == '\n')
		x++;
	if (s[x] == '\0')
		return (ft_strcpy(ft_strnew(1), ""));
	while ((s[len] == '\t' || s[len] == ' ' || s[len] == '\n') && (len > x))
		len--;
	if (!(str = ft_strnew(len - x + 1)))
		return (NULL);
	while (x <= len)
	{
		str[y++] = s[x++];
	}
	str[y] = '\0';
	return (str);
}
