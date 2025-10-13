/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:00:43 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/12 21:58:44 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main()
{
	char dest[20];
	char src[] = "ca copie bien";
	unsigned int i = 0;
	unsigned int j = 0;

	ft_strncpy(dest, src, 20);

	printf("dest = %s \n", dest);
	printf("src = %s \n", src);

	while (i < 20)
	{
	if (dest[i] == '\0')
	j++;
	i++;
	}
	printf("il y a %d char en plus \n", j);
}
*/
