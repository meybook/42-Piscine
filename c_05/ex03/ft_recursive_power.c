/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:28:29 by            #+#    #+#             */
/*   Updated: 2025/07/21 16:37:37 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main()
{
	printf("TEST : %d\n", ft_recursive_power(0, 0));
        printf("TEST : %d\n", ft_recursive_power(5, 5));
        printf("TEST : %d\n", ft_recursive_power(-5, -5));
        printf("TEST : %d\n", ft_recursive_power(2525, 0));
}
*/
