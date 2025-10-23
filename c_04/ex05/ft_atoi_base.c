/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 23:18:47 by            #+#    #+#             */
/*   Updated: 2025/07/30 01:21:25 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_skip_space_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' ')
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign *= -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	index;
	int	base_len;

	i = 0;
	result = 0;
	if (!is_valid(base))
		return (0);
	base_len = ft_strlen(base);
	sign = ft_skip_space_sign(str, &i);
	index = ft_get_index(str[i], base);
	while (index != -1)
	{
		result = result * base_len + index;
		i++;
		index = ft_get_index(str[i], base);
	}
	return (result * sign);
}
/*
#include <stdio.h>
int main()
{
        printf("%d\n",ft_atoi_base("-1010101010", "01"));
}
*/
