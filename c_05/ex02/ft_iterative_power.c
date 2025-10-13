/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:39:08 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/21 16:36:43 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	printf("TEST : %d\n", ft_iterative_power(0, 0));
        printf("TEST : %d\n", ft_iterative_power(5, 5));
        printf("TEST : %d\n", ft_iterative_power(-5, -5));
        printf("TEST : %d\n", ft_iterative_power(2525, 0));
}
*/
