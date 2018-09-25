/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 13:44:24 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/12 16:00:35 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_check_neg(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char			*ft_itoa(int nbr)
{
	int		temp;
	int		len;
	int		neg;
	char	*str;

	temp = nbr;
	len = 2;
	neg = (nbr < 0) ? 1 : 0;
	while ((temp = temp / 10))
		len++;
	len = len + neg;
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = ft_check_neg(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}
