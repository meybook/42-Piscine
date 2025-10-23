/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:08:31 by            #+#    #+#             */
/*   Updated: 2025/07/20 18:37:07 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_visible(int *line)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

void	extract_line(int grid[4][4], int *line, int index, int is_row)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (is_row)
			line[i] = grid[index][i];
		else
			line[i] = grid[i][index];
		i++;
	}
}

void	reverse_line(int *line)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < 2)
	{
		tmp = line[i];
		line[i] = line[3 - i];
		line[3 - i] = tmp;
		i++;
	}
}

int	check_views(int grid[4][4], int *views)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		extract_line(grid, line, i, 0);
		if (count_visible(line) != views[i])
			return (0);
		reverse_line(line);
		if (count_visible(line) != views[i + 4])
			return (0);
		extract_line(grid, line, i, 1);
		if (count_visible(line) != views[i + 8])
			return (0);
		reverse_line(line);
		if (count_visible(line) != views[i + 12])
			return (0);
		i++;
	}
	return (1);
}
