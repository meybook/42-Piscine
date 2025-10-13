/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:39:22 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/29 14:35:09 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[c / 16]);
	ft_putchar(hexa[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_hexa(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int	main()
{
	ft_putstr_non_printable("Hello\nHow are you?");
}
*/
