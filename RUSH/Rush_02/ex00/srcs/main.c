/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <baderwae@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:45:01 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/27 20:32:43 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_dict.h"

int	main(int argc, char **argv)
{
	t_data	data;
	char	*file_name;
	char	*key;

	if (argc < 2 || argc > 3)
		return (ft_error());
	ft_init_data(&data, DICT_FILE_NAME);
	file_name = NULL;
	key = argv[1];
	if (argc == 3)
	{
		if (!ft_is_valid_key(argv[2]))
			return (ft_exit_on_error(&data));
		file_name = argv[1];
		key = argv[2];
	}
	if (ft_fill_data(&data, file_name) == -1)
		return (ft_exit_on_error(&data));
	if (argc == 2 && argv[1][0] == '-')
		if (ft_read_from_stdin(&key, &data) == -1)
			return (ft_exit_on_error(&data));
	if (ft_print_value(key, &data) == -1)
		return (ft_exit_on_error(&data));
	ft_free_data(&data);
	return (0);
}
