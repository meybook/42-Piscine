/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 19:37:11 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/09 19:48:40 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>
int main()
{
	int a = 12;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("egal a : %d\n reste b : %d\n", a, b);
	return 0;
}
*/
