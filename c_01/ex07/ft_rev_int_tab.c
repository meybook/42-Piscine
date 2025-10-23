/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:53:24 by            #+#    #+#             */
/*   Updated: 2025/07/10 16:33:38 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	j = size;
	i = 0;
	temp = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[j - 1];
		tab[j - 1] = temp;
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int main()
{
int *ptr_array;
int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
ptr_array = &tab[0];
ft_rev_int_tab(ptr_array, 10);
int i = 0;
while(i < 10)
{
printf("%d", tab[i]);
i++;
}
return 0;
}
*/
