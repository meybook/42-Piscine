/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:14:19 by            #+#    #+#             */
/*   Updated: 2025/07/22 17:10:27 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include<stdio.h>
int main()
{
	printf("TEST : %d\n", ft_iterative_factorial(5));
        printf("TEST : %d\n", ft_iterative_factorial(-5));
        printf("TEST : %d\n", ft_iterative_factorial(0));
        printf("TEST : %d\n", ft_iterative_factorial(' '));
}
*/
