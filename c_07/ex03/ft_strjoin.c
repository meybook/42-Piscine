/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:59:52 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/28 20:27:33 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		if (i < size - 1)
			total_len = total_len + ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	if (size <= 0)
	{
		result = (char *)malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = malloc(sizeof(char *) * total_len(size, strs, sep) + 1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	char	*str;
	char	*tab[2] = {"a", "b"};
	str = ft_strjoin(2, tab, "-");
	printf("%s\n", str);
}
*/
