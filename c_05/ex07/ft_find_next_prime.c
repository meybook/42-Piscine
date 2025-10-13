/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:05:46 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/22 09:30:13 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprime(int nb)
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_isprime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}
/*
#include <stdio.h>
int main()
{
	printf("TEST (2) : %d\n", ft_find_next_prime(1));
        printf("TEST (3) : %d\n", ft_find_next_prime(2));
        printf("TEST (11) : %d\n", ft_find_next_prime(10));
        printf("TEST (457) : %d\n", ft_find_next_prime(456));

}
*/
