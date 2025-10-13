/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:57:35 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/21 23:04:00 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i * i >= 0)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("RACINE CARRE DE 25 : %d\n", ft_sqrt(25));
        printf("RACINE CARRE DE -5 : %d\n", ft_sqrt(-5));
        printf("RACINE CARRE DE 0 : %d\n", ft_sqrt(0));
        printf("RACINE CARRE DE 2525 : %d\n", ft_sqrt(2525));
}
*/
