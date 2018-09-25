/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 10:44:39 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/01 11:13:40 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	rvalue;
	char			*str;

	i = 0;
	rvalue = (unsigned char)c;
	str = (char *)b;
	while (len > 0)
	{
		str[i] = rvalue;
		len--;
		i++;
	}
	return (str);
}
