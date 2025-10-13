/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_are_duplicates.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:13:58 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/27 17:48:27 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_are_duplicates(char **keys)
{
	int	i;
	int	j;

	i = 0;
	while (keys[i] && keys[i + 1])
	{
		j = i + 1;
		while (keys[j])
		{
			if (ft_strcmp(keys[i], keys[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
