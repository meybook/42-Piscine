/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:45:23 by            #+#    #+#             */
/*   Updated: 2025/07/12 22:09:26 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
	printf("retourne 1 car ABC : %d \n", ft_str_is_uppercase("ABC"));
        printf("retourne 0 car abc : %d \n", ft_str_is_uppercase("abc"));
        printf("retourne 0 car 123 : %d \n", ft_str_is_uppercase("123"));
        printf("retourne 1 car empty : %d \n", ft_str_is_uppercase(""));
        printf("retourne 0 car ??? : %d \n", ft_str_is_uppercase("???"));
}
*/
