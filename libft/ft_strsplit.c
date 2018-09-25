/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:10:16 by lmakwakw          #+#    #+#             */
/*   Updated: 2018/06/11 17:45:20 by lmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_num_words(char const *s, char c)
{
	size_t i;
	size_t words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			while (s[i] == c)
				i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static	size_t	ft_num_char(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * ft_num_words(s, c) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			str[x] = ft_strsub(s, i, ft_num_char(&s[i], c));
			x++;
			i = i + ft_num_char(&s[i], c);
		}
		while (s[i] && s[i] == c)
			i++;
	}
	str[x] = NULL;
	return (str);
}
