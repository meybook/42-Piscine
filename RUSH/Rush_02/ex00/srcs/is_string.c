/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <baderwae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:37:34 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/27 20:25:29 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_is_num(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_is_printable(char c)
{
	if (c < ' ' || c > '~')
		return (0);
	return (1);
}

int	ft_is_strprintable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}

int	ft_is_strnum(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
