/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 16:28:22 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/08/20 13:53:56 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_get_line(char **str, char **line, int fd, int ret)
{
	int		len;
	char	*temp;

	len = 0;
	while (str[fd][len] != '\0' && str[fd][len] != '\n')
		len++;
	if (str[fd][len] == '\n')
	{
		*line = ft_strsub(str[fd], 0, len);
		temp = ft_strdup(str[fd] + len + 1);
		ft_strdel(&str[fd]);
		str[fd] = temp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][len] == '\0')
	{
		if (ret == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str[2147483647];
	char		buf[BUFF_SIZE + 1];
	char		*temp;
	int			ret;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		temp = ft_strjoin(str[fd], buf);
		ft_strdel(&str[fd]);
		str[fd] = temp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (ft_get_line(str, line, fd, ret));
}
