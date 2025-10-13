/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:53:42 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/12 22:12:40 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main()
{
printf("1 car Hello World : %d \n", ft_str_is_printable("Hello World"));
printf("0 car pas printable (31 en ascii) : %d \n", ft_str_is_printable("\037"));
}
*/
