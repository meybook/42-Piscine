/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 20:45:01 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/21 18:14:54 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main()
{
        printf("TEST : %d\n", ft_recursive_factorial(5));
        printf("TEST : %d\n", ft_recursive_factorial(-5));
        printf("TEST : %d\n", ft_recursive_factorial(0));
        printf("TEST : %d\n", ft_recursive_factorial(' '));
}
*/
