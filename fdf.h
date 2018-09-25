/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:43:55 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/08/22 15:06:53 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include "libft/libft.h"
# include <math.h>
# include <fcntl.h>
# include <stdio.h>
# define WIDTH 1280
# define HEIGHT 800

typedef	struct		s_read
{
	int				fd;
	int				ret;
	int				px;
	int				py;
	char			*line;
	char			**split;
}					t_read;

typedef	struct		s_mxl
{
	void			*mxl;
	void			*win;
	void			*img;
}					t_mxl;

typedef	struct		s_orig
{
	float			x;
	float			y;
	float			z;
}					t_orig;

typedef	struct		s_mod
{
	float			x;
	float			y;
	float			z;
}					t_mod;

typedef	struct		s_map
{
	t_orig			orig;
	t_mod			mod;
	t_mxl			inter;
	int				rows;
	int				cols;
	float			ft;
	struct s_map	*next;
}					t_map;

typedef	struct		s_draw
{
	float			x;
	float			y;
	float			dx;
	float			dy;
	float			swap;
	float			s1;
	float			s2;
	float			p;
	float			i;
	float			temp;
}					t_draw;

typedef	struct		s_project
{
	float			height;
	float			width;
}					t_project;

t_map				*map_read(char *file);
t_map				*project(t_map *head);
t_map				*rotate_x(t_map *head, float degree);
t_map				*rotate_y(t_map *head, float degree);
t_map				*rotate_z(t_map *head, float degree);
t_map				*scale_down(t_map *head, float scale);
t_map				*scale_up(t_map *head, float scale);
t_map				*checker(char *file, t_map *head);
t_map				*list_malloc(void);
t_draw				draw_setup(t_draw draw, t_map *current, t_map *next);
t_draw				swap(t_draw draw);
t_draw				nextstep(t_draw draw);
void				line_draw_x(t_map *head);
void				empty_map(t_map *head);
void				valid_map(t_map *head);
int					check_map(char *file);
int					ft_abs(int value);
int					sign(int x);
int					keywork(int keycode, t_map *head);

#endif
