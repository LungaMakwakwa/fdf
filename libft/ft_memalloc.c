/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:15:38 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/11 16:23:23 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = malloc(size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, size);
		return (ptr);
	}
	return (0);
}
