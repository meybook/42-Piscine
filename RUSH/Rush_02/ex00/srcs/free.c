/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:35:49 by           #+#    #+#             */
/*   Updated: 2025/07/27 20:30:57 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

void	ft_free_strs(char **strs)
{
	int	i;

	if (!strs)
		return ;
	i = 0;
	while (strs[i])
	{
		if (strs[i])
			free(strs[i]);
		i++;
	}
	free(strs);
}

void	ft_free_data(t_data *data)
{
	if (data->content)
		free(data->content);
	ft_free_strs(data->lines);
	ft_free_strs(data->keys);
	ft_free_strs(data->values);
	ft_free_strs(data->origin_keys);
}
