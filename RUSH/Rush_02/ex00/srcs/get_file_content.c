/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_content.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 05:07:19 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/27 17:55:54 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

char	**ft_get_lines(char *content)
{
	char	**strs;
	int		i;

	strs = ft_split(content, "\n");
	if (!strs)
		return (NULL);
	i = 0;
	while (strs[i])
	{
		if (!ft_is_valid_line(strs[i]))
			return (NULL);
		i++;
	}
	return (strs);
}

char	*ft_get_file_content(char *file_name, int size)
{
	int		fd;
	char	*content;

	fd = ft_open_file(file_name);
	if (fd == -1)
		return (NULL);
	content = malloc(sizeof(char) * (size + 1));
	if (!content)
		return (NULL);
	ft_get_fd_content(fd, content);
	if (ft_close_file(fd) == -1)
	{
		free(content);
		return (NULL);
	}
	return (content);
}

int	ft_get_fd_content(int fd, char *content)
{
	char	buffer[BUFFER_SIZE];
	int		c_read;
	int		i;
	int		j;

	c_read = 1;
	j = 0;
	while (c_read > 0)
	{
		c_read = read(fd, buffer, BUFFER_SIZE);
		if (c_read == -1)
			return (-1);
		i = 0;
		while (i < c_read)
		{
			content[j + i] = buffer[i];
			i++;
		}
		j += i;
	}
	content[j] = 0;
	return (1);
}
