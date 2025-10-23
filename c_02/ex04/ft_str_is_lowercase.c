/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:36:37 by            #+#    #+#             */
/*   Updated: 2025/07/12 22:05:46 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("retourne 1 car abc : %d \n", ft_str_is_lowercase("abc"));
        printf("retourne 0 car ABC : %d \n", ft_str_is_lowercase("ABC"));
        printf("retourne 0 car 123 : %d \n", ft_str_is_lowercase("123"));
        printf("retourne 1 car empty : %d \n", ft_str_is_lowercase(""));
        printf("retourne 0 car ??? : %d \n", ft_str_is_lowercase("???"));
}
*/
