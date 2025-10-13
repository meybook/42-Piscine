/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:14:22 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/16 14:09:16 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (s2[i] != '\0')
		return (0);
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		if (ft_strcmp(str, to_find) == 1)
			return (str);
		else
			str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char	str1[] = "testcewef";
	char	str2[] = "testc";
	
	printf("locurence : %s\n", ft_strstr(str1, str2));
	printf("locurence : %s\n", strstr(str1, str2));

}
*/
