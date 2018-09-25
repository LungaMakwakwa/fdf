/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:13:04 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/11 16:21:09 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*temp;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	if (!(temp = (char *)malloc(len + 1)))
		return (NULL);
	while (len > i)
	{
		temp[i] = f(s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
