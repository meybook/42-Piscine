/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_key_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:55:25 by           #+#    #+#             */
/*   Updated: 2025/07/27 20:24:09 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_is_valid_key(char *key)
{
	if (!key || !(*key) || !ft_is_strnum(key))
		return (0);
	if (key[0] == '0' && key[1] != 0)
		return (0);
	return (1);
}

int	ft_is_valid_value(char *value)
{
	if (!value || !ft_is_strprintable(value))
		return (0);
	return (1);
}
