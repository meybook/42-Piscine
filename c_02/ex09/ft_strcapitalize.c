/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:25:08 by            #+#    #+#             */
/*   Updated: 2025/07/29 15:27:18 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char str[100] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s\n", ft_strcapitalize(str));
}
*/
