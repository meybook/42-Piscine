/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:12:04 by            #+#    #+#             */
/*   Updated: 2025/07/12 22:15:03 by           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
char	str1[] = "Hello world";
char	str2[] = "hello world";

ft_strupcase(str1);
printf("new : %s \n", str1);

ft_strupcase(str2);
printf("new : %s \n", str2);	
}
*/
