/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wakanze <wakanze@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:08:17 by wakanze           #+#    #+#             */
/*   Updated: 2025/07/20 18:27:36 by wakanze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_views(int grid[4][4], int *views);
int	is_safe(int grid[4][4], int row, int col, int val);

int	solve(int grid[4][4], int *views, int pos)
{
	int	row;
	int	col;
	int	val;

	if (pos == 16)
		return (check_views(grid, views));
	row = pos / 4;
	col = pos % 4;
	val = 1;
	while (val <= 4)
	{
		if (is_safe(grid, row, col, val))
		{
			grid[row][col] = val;
			if (solve(grid, views, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}

int	is_safe(int grid[4][4], int row, int col, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == val || grid[i][col] == val)
			return (0);
		i++;
	}
	return (1);
}
