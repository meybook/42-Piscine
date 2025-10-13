/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nthys <nthys@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:51:12 by nthys             #+#    #+#             */
/*   Updated: 2025/07/12 16:54:15 by nthys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((pos_x == 0 || pos_x == x - 1) && pos_y == 0)
				ft_putchar('A');
			else if ((pos_x == 0 || pos_x == x - 1) && pos_y == y - 1)
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
