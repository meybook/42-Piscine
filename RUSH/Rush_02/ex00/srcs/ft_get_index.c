/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 05:56:47 by           #+#    #+#             */
/*   Updated: 2025/07/27 06:03:15 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_get_index(char *str, char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		if (ft_strcmp(str, strs[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}
/*

#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"fjhdh", "dfjnjgd", "djjdfjf","dbfbfdgh"};
	char	str[] = "dj";
	printf("%d", ft_get_index(str, strs));

	return(0);
}*/
