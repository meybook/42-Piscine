/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <baderwae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:50:18 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/27 08:24:32 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

char	*ft_create_simple_key(char *str, int size)
{
	char	*simple_key;
	int		i;

	simple_key = malloc(sizeof(char) * (size + 1));
	if (!simple_key)
		return (NULL);
	i = 0;
	while (i < size)
	{
		simple_key[i] = str[i];
		i++;
	}
	simple_key[i] = 0;
	return (simple_key);
}

char	*ft_create_big_key(int size)
{
	char	*big_key;
	int		i;

	big_key = malloc(sizeof(char) * (size + 1));
	if (!big_key)
		return (NULL);
	big_key[0] = '1';
	i = 1;
	while (i < size)
	{
		big_key[i] = '0';
		i++;
	}
	big_key[i] = 0;
	return (big_key);
}

char	*ft_parse_key(char *line)
{
	char	*key;
	int		i;

	i = 0;
	while (line[i] && ft_is_num(line[i]))
		i++;
	key = malloc(sizeof(char) * (i + 1));
	if (!key)
		return (NULL);
	i = 0;
	while (line[i] && ft_is_num(line[i]))
	{
		key[i] = line[i];
		i++;
	}
	key[i] = 0;
	return (key);
}

char	**ft_parse_keys(char **lines)
{
	char	**keys;
	int		size;
	int		i;

	size = ft_strslen(lines);
	keys = malloc(sizeof(char *) * (size + 1));
	if (!keys)
		return (NULL);
	i = 0;
	while (lines[i])
	{
		keys[i] = ft_parse_key(lines[i]);
		if (!keys[i])
		{
			ft_free_strs(keys);
			return (NULL);
		}
		i++;
	}
	return (keys);
}
