/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:39:22 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/12 22:17:01 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
char	str1[] = "Hello World";
char	str2[] = "HELLO WORLD";

	ft_strlowcase(str1);
	printf("new : %s \n", str1);

	ft_strlowcase(str2);
	printf("new : %s \n", str2);
}
*/
