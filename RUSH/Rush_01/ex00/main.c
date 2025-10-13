/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wakanze <wakanze@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:20:53 by wakanze           #+#    #+#             */
/*   Updated: 2025/07/20 18:37:58 by wakanze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *s);
int		parse_input(char *str, int *views);
int		solve(int grid[4][4], int *views, int pos);
void	print_grid(int grid[4][4]);

void	init_grid(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	handle_args(int argc, char **argv, int *views)
{
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (!parse_input(argv[1], views))
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	views[16];

	if (!handle_args(argc, argv, views))
		return (1);
	init_grid(grid);
	if (!solve(grid, views, 0))
		ft_putstr("Error\n");
	else
		print_grid(grid);
	return (0);
}
