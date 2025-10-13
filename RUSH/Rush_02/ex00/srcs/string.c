/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 08:53:43 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/27 07:33:14 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

int	ft_strslen(char **strs)
{
	int	size;

	size = 0;
	while (strs[size])
		size++;
	return (size);
}

void	ft_putstr_fd(char *str, int fd)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	write(fd, str, size);
}
