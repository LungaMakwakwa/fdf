/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 10:42:30 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/08/20 14:02:50 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int ac, char **av)
{
	t_map	*head;

	if (ac == 2)
	{
		head = map_read(av[1]);
		head = checker(av[1], head);
		valid_map(head);
		head->inter.mxl = mlx_init();
		head->inter.win = mlx_new_window(head->inter.mxl, WIDTH, HEIGHT, "FDF");
		head = project(head);
		line_draw_x(head);
		mlx_key_hook(head->inter.win, keywork, head);
		mlx_loop(head->inter.mxl);
		free(head->inter.mxl);
	}
	if (ac < 2)
		ft_putendl("Input Test Map");
	else if (ac > 2)
		ft_putendl("Too Many Argumets");
	return (0);
}
