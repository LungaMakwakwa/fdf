/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:50:49 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/08/20 13:58:06 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static	t_map	*createint(int x, int y, char *z)
{
	t_map	*new_node;

	new_node = list_malloc();
	new_node->orig.x = x;
	new_node->orig.y = y;
	new_node->orig.z = ft_atoi(z);
	return (new_node);
}

static	t_map	*appendint(t_map *head, int x, int y, char *z)
{
	t_map	*cursor;
	t_map	*new_node;

	if (head == NULL)
		head = createint(x, y, z);
	else
	{
		cursor = head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		new_node = createint(x, y, z);
		cursor->next = new_node;
	}
	return (head);
}

void			free_array(void **array)
{
	int n;

	n = 0;
	while (array[n] != NULL)
	{
		free(array[n]);
		n++;
	}
	free(array);
}

t_map			*map_read(char *file)
{
	t_map	*head;
	t_read	run;

	run.py = 0;
	head = NULL;
	run.fd = check_map(file);
	while ((run.ret = get_next_line(run.fd, &run.line)) > 0)
	{
		run.px = 0;
		run.split = ft_strsplit(run.line, ' ');
		while (run.split[run.px] != NULL)
		{
			head = appendint(head, run.px, run.py, run.split[run.px]);
			run.px += 1;
		}
		run.py += 1;
		free_array((void**)run.split);
		free(run.line);
	}
	close(run.fd);
	empty_map(head);
	head->rows = run.py;
	head->cols = run.px;
	return (head);
}
