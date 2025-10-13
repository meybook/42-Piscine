/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_operations_basics.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:57:52 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/27 19:34:18 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_open_file(char *file_name)
{
	int		fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (-1);
	return (fd);
}

int	ft_close_file(int fd)
{
	if (close(fd) == -1)
		return (-1);
	return (1);
}
