/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   origin_keys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:20:38 by           #+#    #+#             */
/*   Updated: 2025/07/27 16:29:55 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

char	**ft_get_origin_keys(void)
{
	char	**origin_keys;
	char	*content;
	int		size;

	size = ft_get_file_size(DICT_FILE_NAME);
	if (size == -1)
		return (NULL);
	content = ft_get_file_content(ORIGIN_FILE_NAME, size);
	if (!(content))
		return (NULL);
	origin_keys = ft_split(content, "\n");
	if (!origin_keys)
	{
		free(content);
		return (NULL);
	}
	free(content);
	return (origin_keys);
}
