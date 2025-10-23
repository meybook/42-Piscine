/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:42:05 by            #+#    #+#             */
/*   Updated: 2025/07/30 16:16:09 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define EVEN(n) ((n % 2) == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG  "I have an odd number of arguments.\n"
# define SUCCESS 0

typedef int	t_bool;

#endif
