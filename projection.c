/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:43:46 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/08/20 15:12:20 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_map	*checker(char *file, t_map *head)
{
	char *ft;

	ft = ft_strrchr(file, '.');
	ft = ft - 2;
	if ((ft_strcmp(ft, "42.fdf")) == 0)
		head->ft = 8;
	else
		head->ft = 0.5;
	return (head);
}

t_map	*project(t_map *head)
{
	t_map		*p;
	t_project	x;
	float		ft;
	float		angle;

	ft = head->ft;
	p = head;
	x.width = (WIDTH / head->cols) / 2;
	x.height = (HEIGHT / head->rows) / 2;
	while (p != NULL)
	{
		angle = 30 * (M_PI / 180);
		p->mod.y = (cos(angle) * p->orig.y) + (-sin(angle) * (p->orig.z / ft));
		p->mod.z = (sin(angle) * p->orig.y) + (cos(angle) * (p->orig.z / ft));
		angle = -20 * (M_PI / 180);
		p->mod.x = (cos(angle) * p->orig.x) + (sin(angle) * (p->orig.z / ft));
		p->mod.z = (-sin(angle) * p->orig.y) + (cos(angle) * (p->orig.z / ft));
		angle = 25 * (M_PI / 180);
		p->mod.x = (cos(angle) * p->mod.x) + (-sin(angle) * p->mod.y);
		p->mod.y = (sin(angle) * p->mod.x) + (cos(angle) * p->mod.y);
		p->mod.x = x.width * p->mod.x;
		p->mod.y = x.height * p->mod.y;
		p = p->next;
	}
	return (head);
}
