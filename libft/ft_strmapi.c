/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:59:09 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/11 16:24:12 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	size_t	len;
	size_t	i;

	if (!s)
	{
		return (NULL);
	}
	len = (size_t)ft_strlen(s);
	i = 0;
	if (!(temp = (char *)malloc(len + 1)))
	{
		return (NULL);
	}
	while (len > i)
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
