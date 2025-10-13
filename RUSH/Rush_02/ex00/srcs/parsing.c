/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <baderwae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 05:30:22 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/27 05:56:01 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_is_valid_line(char *line)
{
	int	i;

	if (!line || !ft_is_num(line[0]))
		return (0);
	i = 0;
	while (line[i] && ft_is_num(line[i]))
	{
		if (i == 1 && ft_is_num(line[i]) && line[i - 1] == '0')
			return (0);
		i++;
	}
	while (line[i] && line[i] == ' ')
		i++;
	if (line[i] != ':')
		return (0);
	while (line[i] && line[i] == ' ')
		i++;
	while (line[i] && ft_is_printable(line[i]))
		i++;
	if (line[i] != 0)
		return (0);
	return (1);
}
