/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:03:45 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/08/20 14:54:13 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	empty_map(t_map *head)
{
	if (head == NULL)
	{
		ft_putendl("Error: File Is EMPTY");
		exit(1);
	}
}

int		check_map(char *file)
{
	int		fd;
	char	*check;

	check = strrchr(file, '.');
	if (check == NULL)
	{
		ft_putendl("ERROR: Invalid file");
		exit(1);
	}
	if ((strcmp(check, ".fdf") != 0))
	{
		ft_putendl("ERROR: Invalid file");
		exit(1);
	}
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		perror("ERROR: On File Opening");
		exit(1);
	}
	return (fd);
}

t_map	*list_malloc(void)
{
	t_map *new_node;

	new_node = (t_map *)malloc(sizeof(t_map));
	if (new_node == NULL)
	{
		perror("ERROR: Cannot malloc");
		exit(1);
	}
	new_node->next = NULL;
	return (new_node);
}

void	valid_map(t_map *head)
{
	int		i;
	int		lines;
	t_map	*check;

	i = 0;
	check = head;
	while (check != NULL)
	{
		i++;
		check = check->next;
	}
	lines = head->rows * head->cols;
	if (i == lines)
		return ;
	else
	{
		ft_putendl("ERROR: Not Valid Map");
		exit(1);
	}
}
