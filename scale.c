/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scale.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:51:45 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/08/20 09:48:47 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_map	*scale_up(t_map *head, float scale)
{
	t_map *points;

	points = head;
	while (points != NULL)
	{
		points->mod.x = points->mod.x * scale;
		points->mod.y = points->mod.y * scale;
		points->mod.z = points->mod.z * scale;
		points = points->next;
	}
	return (head);
}

t_map	*scale_down(t_map *head, float scale)
{
	t_map *points;

	points = head;
	while (points != NULL)
	{
		points->mod.x = points->mod.x / scale;
		points->mod.y = points->mod.y / scale;
		points->mod.z = points->mod.z / scale;
		points = points->next;
	}
	return (head);
}
