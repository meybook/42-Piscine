/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:30:11 by           #+#    #+#             */
/*   Updated: 2025/07/13 16:03:05 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	rush(int x, int y);

int	main(void)
{
	int		x;
	int		y;

	x = 5;
	y = 5;
	if (x <= 0 || y <= 0)
		write (1, "Error : Please try again with a positive number", 47);
	else if (x > INT_MAX || y > INT_MAX)
		write (1, "Error : The number is not a valid int", 37);
	else
		rush(x, y);
	return (0);
}
