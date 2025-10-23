/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_trio.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 07:02:16 by           #+#    #+#             */
/*   Updated: 2025/07/27 09:14:28 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_print_hundreds(char *key, t_data *data)
{
	char	*simple_key;

	simple_key = ft_create_simple_key(key, 1);
	if (!simple_key)
		return (-1);
	ft_putstr_fd(data->values[ft_get_index(simple_key, data->keys)], 1);
	ft_putstr_fd(" ", 1);
	ft_putstr_fd(data->values[ft_get_index("100", data->keys)], 1);
	if (key[1] != '0' || key[2] != '0')
		ft_putstr_fd(" ", 1);
	free(simple_key);
	return (1);
}

int	ft_print_tens(char *key, t_data *data)
{
	char	*simple_key;

	simple_key = ft_create_simple_key(key, 2);
	if (!simple_key)
		return (-1);
	if (key[0] == '1')
		ft_putstr_fd(data->values[ft_get_index(simple_key, data->keys)], 1);
	else
	{
		simple_key[1] = '0';
		ft_putstr_fd(data->values[ft_get_index(simple_key, data->keys)], 1);
		if (key[1] != '0')
			ft_putstr_fd(" ", 1);
	}
	free(simple_key);
	return (1);
}

int	ft_print_units(char *key, t_data *data)
{
	char	*simple_key;

	simple_key = ft_create_simple_key(key, 1);
	if (!simple_key)
		return (-1);
	ft_putstr_fd(data->values[ft_get_index(simple_key, data->keys)], 1);
	free(simple_key);
	return (1);
}

int	ft_print_trio(char *key, int size, t_data *data)
{
	if (size < 1)
		return (1);
	if (size == 3)
	{
		if (key[0] != '0')
		{
			if (ft_print_hundreds(key, data) == -1)
				return (-1);
		}
		key++;
	}
	if (size > 1)
	{
		if (key[0] != '0')
		{
			ft_print_tens(key, data);
			if (key[0] == '1')
				return (1);
		}
		key++;
	}
	if (key[0] != '0')
		if (ft_print_units(key, data) == -1)
			return (-1);
	return (1);
}
