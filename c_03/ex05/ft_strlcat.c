/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 00:42:29 by lluiggi           #+#    #+#             */
/*   Updated: 2025/07/16 18:17:44 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	t_dest;
	unsigned int	t_src;
	unsigned int	i;

	t_dest = ft_strlen(dest);
	t_src = ft_strlen(src);
	i = 0;
	if (t_dest >= size)
		return (size + t_src);
	while (src[i] && (t_dest + i + 1) < size)
	{
		dest[t_dest + i] = src[i];
		i++;
	}
	dest[t_dest + i] = '\0';
	return (t_dest + t_src);
}

#include<stdio.h>
#include<string.h>
int main()
{
	char buf1[100] = "ecole";
	char src[] = " ecole 19";
        unsigned int result = ft_strlcat(buf1, src, 100);

	printf("avant : %s\n", buf1);
	printf("apres %d\n", result);

        printf("avant vrai: %s\n", buf1);
        printf("apres vrai : %d\n", result);

}

