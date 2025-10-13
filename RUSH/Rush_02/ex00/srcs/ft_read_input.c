/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:13:54 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/27 19:54:59 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	ft_read_from_stdin(char **key, t_data *data)
{
	int	size;

	while (1)
	{
		*key = ft_read_input();
		if (!(*key))
			return (-1);
		size = ft_strlen(*key);
		(*key)[size - 1] = 0;
		if (!ft_is_valid_key(*key))
		{
			free(*key);
			return (-1);
		}
		if (ft_print_value(*key, data) == -1)
		{
			free(*key);
			return (-1);
		}
		free(*key);
	}
	return (1);
}

char	*ft_read_input(void)
{
	char	buffer[BUFFER_SIZE];
	char	*input;
	int		input_size;
	int		i;

	input_size = read(0, buffer, BUFFER_SIZE);
	if (input_size <= 0 || input_size > BUFFER_SIZE - 2)
		return (NULL);
	input = (char *)malloc(sizeof(char) * (input_size + 1));
	if (!input)
		return (NULL);
	i = 0;
	while (i < input_size)
	{
		input[i] = buffer[i];
		i++;
	}
	input[i] = '\0';
	return (input);
}
