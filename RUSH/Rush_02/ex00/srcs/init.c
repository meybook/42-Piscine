/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <baderwae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:19:14 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/27 20:21:12 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

void	ft_init_data(t_data *data, char *file_name)
{
	if (!data)
		return ;
	data->dict_file_name = file_name;
	if (!file_name)
		data->dict_file_name = DICT_FILE_NAME;
	data->content = NULL;
	data->lines = NULL;
	data->origin_keys = NULL;
	data->keys = NULL;
	data->values = NULL;
}

int	ft_is_valid_dict(char **keys, char **origin_keys)
{
	if (ft_are_duplicates(keys))
		return (0);
	if (!ft_strs_in_strs(keys, origin_keys))
		return (0);
	return (1);
}

int	ft_fill_data(t_data *data, char *file_name)
{
	int	size;

	ft_init_data(data, file_name);
	size = ft_get_file_size(data->dict_file_name);
	if (size == -1)
		return (-1);
	data->content = ft_get_file_content(data->dict_file_name, size);
	if (!(data->content))
		return (-1);
	data->lines = ft_get_lines(data->content);
	if (!data->lines)
		return (-1);
	data->keys = ft_parse_keys(data->lines);
	if (!data->keys)
		return (-1);
	data->values = ft_parse_values(data->lines);
	if (!data->values)
		return (-1);
	data->origin_keys = ft_get_origin_keys();
	if (!data->origin_keys)
		return (-1);
	if (!ft_is_valid_dict(data->keys, data->origin_keys))
		return (-1);
	return (1);
}
