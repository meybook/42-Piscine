/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 08:27:01 by           #+#    #+#             */
/*   Updated: 2025/07/27 16:39:38 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_print_big(int size, t_data *data)
{
	char	*big_key;

	if (size > 3)
	{
		if (size % 3 == 0)
			size -= 3;
		size -= size % 3;
		big_key = ft_create_big_key(size + 1);
		if (!big_key)
			return (-1);
		ft_putstr_fd(data->values[ft_get_index(big_key, data->keys)], 1);
		ft_putstr_fd(" ", 1);
	}
	return (1);
}

int	ft_is_trio_null(char *key)
{
	if (ft_strlen(key) < 3)
		return (0);
	if (key[0] == '0' && key[1] == '0' && key[2] == '0')
		return (1);
	return (0);
}

int	ft_print_combined_part(char *key, int size, t_data *data)
{
	if (!ft_is_trio_null(key))
	{
		if (ft_print_trio(key, 3, data) == -1)
			return (-1);
		if (size > 3)
			ft_putstr_fd(" ", 1);
		if (ft_print_big(size, data) == -1)
			return (-1);
	}
	return (1);
}

int	ft_print_combinated_value(char *key, t_data *data)
{
	int		size;

	size = ft_strlen(key);
	if (size > MAX_KEY_SIZE)
		return (-1);
	if (size % 3 != 0)
	{
		if (ft_print_trio(key, size % 3, data) == -1)
			return (-1);
		if (size > 3)
			ft_putstr_fd(" ", 1);
		if (ft_print_big(size, data) == -1)
			return (-1);
	}
	key += size % 3;
	size -= size % 3;
	while (size > 0)
	{
		ft_print_combined_part(key, size, data);
		size -= 3;
		key += 3;
	}
	ft_putstr_fd("\n", 1);
	return (1);
}

int	ft_print_value(char *key, t_data *data)
{
	int	index;

	index = ft_get_index(key, data->keys);
	if (index != -1)
	{
		ft_putstr_fd(data->values[index], 1);
		ft_putstr_fd("\n", 1);
		return (1);
	}
	if (!ft_is_strnum(key))
		return (-1);
	if (ft_print_combinated_value(key, data) != -1)
		return (1);
	return (-1);
}
