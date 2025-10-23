/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:43:01 by           #+#    #+#             */
/*   Updated: 2025/07/26 18:25:57 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_get_file_size(char *file_name)
{
	char	buffer[BUFFER_SIZE];
	int		fd;
	int		size;
	int		c_read;

	fd = ft_open_file(file_name);
	if (fd == -1)
		return (-1);
	size = 0;
	c_read = 1;
	while (c_read > 0)
	{
		c_read = read(fd, buffer, BUFFER_SIZE);
		if (c_read == -1)
			return (-1);
		size += c_read;
	}
	ft_close_file(fd);
	return (size);
}
