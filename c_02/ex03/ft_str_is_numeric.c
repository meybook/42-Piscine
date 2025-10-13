/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:22:12 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/12 22:03:53 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("retourne 1 car 123 : %d \n", ft_str_is_numeric("123"));
        printf("retourne 0 car ABC : %d \n", ft_str_is_numeric("ABC"));
        printf("retourne 1 car empty : %d \n", ft_str_is_numeric(""));
        printf("retourne 0 car ??? : %d \n", ft_str_is_numeric("???"));
}
*/
