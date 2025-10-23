/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:58:06 by            #+#    #+#             */
/*   Updated: 2025/07/22 09:28:39 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	printf("TEST (1) : %d\n", ft_is_prime(2));
        printf("TEST (1) : %d\n", ft_is_prime(3));
        printf("TEST (0) : %d\n", ft_is_prime(4));
        printf("TEST (1) : %d\n", ft_is_prime(5));
        printf("TEST (0) : %d\n", ft_is_prime(6));
}
*/
