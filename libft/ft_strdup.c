/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:13:17 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/07 16:32:29 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str2)
		return (0);
	while (s1[i] != '\0')
	{
		str2[i] = s1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
