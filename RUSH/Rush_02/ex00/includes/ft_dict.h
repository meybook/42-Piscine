/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:43:44 by           #+#    #+#             */
/*   Updated: 2025/07/27 20:42:26 by          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_DICT_H
# define FT_DICT_H

# define DICT_FILE_NAME "numbers.dict"
# define ORIGIN_FILE_NAME "origin.dict"
# define MAX_KEY_SIZE 39 
# define BUFFER_SIZE 1000

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_data
{
	char	*dict_file_name;
	char	*content;
	char	**lines;
	char	**keys;
	char	**origin_keys;
	char	**values;
}	t_data;

int		ft_error(void);
void	ft_free_strs(char **strs);
void	ft_free_data(t_data *data);
int		ft_exit_on_error(t_data *data);

int		ft_is_valid_line(char *line);
int		ft_are_valid_keys(char **keys);
void	ft_init_data(t_data *data, char *file_name);
int		ft_fill_data(t_data *data, char *file_name);

int		ft_strlen(char *str);
int		ft_strslen(char **strs);
void	ft_putstr_fd(char *str, int fd);
int		ft_strcmp(char *s1, char *s2);
int		ft_is_printable(char c);
int		ft_is_strprintable(char *str);
int		ft_is_num(char c);
int		ft_is_strnum(char *str);
char	**ft_split(char *str, char *charset);

int		ft_open_file(char *file_name);
int		ft_close_file(int fd);
void	ft_read_stdin(void);
char	*ft_read_input(void);
int		ft_read_from_stdin(char **key, t_data *data);

int		ft_get_file_size(char *file_name);
char	*ft_get_file_content(char *file_name, int size);
int		ft_get_fd_content(int fd, char *content);
char	**ft_get_lines(char *content);
char	**ft_get_origin_keys(void);

int		ft_is_valid_key(char *key);
int		ft_is_valid_value(char *key);
int		ft_are_duplicates(char **keys);
int		ft_strs_in_strs(char **s1, char **s2);

char	**ft_parse_keys(char **lines);
char	**ft_parse_values(char **lines);
char	*ft_create_simple_key(char *str, int size);
char	*ft_create_big_key(int size);
int		ft_get_index(char *str, char **strs);

int		ft_print_value(char *key, t_data *data);
int		ft_print_trio(char *key, int size, t_data *data);

#endif
