/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 15:09:38 by            #+#    #+#             */
/*   Updated: 2025/07/13 15:52:01 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		pos_x;
	int		pos_y;

	pos_y = 0;
	while (pos_y < y)
	{
		pos_x = 0;
		while (pos_x < x)
		{
			if ((pos_x == 0 && pos_y == 0)
				|| (pos_x == x - 1 && pos_y == y - 1))
				ft_putchar('A');
			else if ((pos_x == 0 && pos_y == y - 1)
				|| (pos_x == x - 1 && pos_y == 0))
				ft_putchar('C');
			else if ((pos_x != x - 1 && pos_x != 0)
				&& (pos_y != 0 && pos_y != y - 1))
				ft_putchar(' ');
			else
				ft_putchar('B');
			pos_x++;
		}
		pos_y++;
		ft_putchar('\n');
	}
}
