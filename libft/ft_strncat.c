/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:33:57 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/07 17:48:46 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	int x;
	int y;
	int num;

	y = 0;
	x = ft_strlen(s1);
	num = (int)n;
	while (s2[y] != '\0' && y < num)
	{
		s1[x] = s2[y];
		y++;
		x++;
	}
	s1[x] = '\0';
	return (s1);
}
