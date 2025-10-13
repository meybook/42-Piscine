/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:00:22 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/14 16:02:21 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	int	tab[6] = {10, 42, 3, 24, 75, 6};
	ft_sort_int_tab(tab, 6);

	int i = 0;

	while (i < 6)
	{
		printf("%d \n", tab[i]);
		i++;
	}
}
*/
