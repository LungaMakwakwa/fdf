/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_work.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:39:15 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/08/17 11:53:24 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	freemap(t_map *head)
{
	t_map	*second;

	second = head->next;
	while (head != NULL)
	{
		free(head);
		head = second;
		if (second->next != NULL)
			second = second->next;
		if (second->next == NULL)
			head = second->next;
	}
}

int		keywork(int keycode, t_map *head)
{
	if (keycode == 53 || keycode == 65307)
	{
		freemap(head);
		exit(0);
	}
	if (keycode == 69)
	{
		head = scale_up(head, 1.5);
		mlx_clear_window(head->inter.mxl, head->inter.win);
		line_draw_x(head);
	}
	if (keycode == 78)
	{
		head = scale_down(head, 1.5);
		mlx_clear_window(head->inter.mxl, head->inter.win);
		line_draw_x(head);
	}
	return (0);
}
