/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:33:47 by            #+#    #+#             */
/*   Updated: 2025/07/12 22:01:28 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("ca retourne 1 car cest ABC : %d \n", ft_str_is_alpha("ABC"));
	printf("ca retourne 0 car cest 123 : %d \n", ft_str_is_alpha("123"));
        printf("ca retourne 1 car cest empty : %d \n", ft_str_is_alpha(""));
        printf("ca retourne 0 car cest ??? : %d \n", ft_str_is_alpha("???"));
}
*/
