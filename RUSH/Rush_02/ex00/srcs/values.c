/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   values.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 05:54:05 by           #+#    #+#             */
/*   Updated: 2025/07/27 06:11:33 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

char	*ft_parse_value(char *line)
{
	char	*value;
	int		i;

	while (*line && *line != ':')
		line++;
	line++;
	while (*line && *line == ' ')
		line++;
	i = 0;
	while (line[i] && ft_is_printable(line[i]))
		i++;
	value = malloc(sizeof(char) * (i + 1));
	if (!value)
		return (NULL);
	i = 0;
	while (line[i] && ft_is_printable(line[i]))
	{
		value[i] = line[i];
		i++;
	}
	value[i] = 0;
	return (value);
}

char	**ft_parse_values(char **lines)
{
	char	**values;
	int		size;
	int		i;

	size = ft_strslen(lines);
	values = malloc(sizeof(char *) * (size + 1));
	if (!values)
		return (NULL);
	i = 0;
	while (lines[i])
	{
		values[i] = ft_parse_value(lines[i]);
		if (!values[i])
		{
			ft_free_strs(values);
			return (NULL);
		}
		i++;
	}
	return (values);
}
