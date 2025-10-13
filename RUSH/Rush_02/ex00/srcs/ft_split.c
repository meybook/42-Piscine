/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baderwae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:10:08 by baderwae          #+#    #+#             */
/*   Updated: 2025/07/17 07:01:47 by baderwae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	wc;
	int	i;
	int	flag;

	wc = 0;
	i = 0;
	flag = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && flag == 0)
		{
			flag = 1;
			wc++;
		}
		else
			if (is_sep(str[i], charset))
				flag = 0;
		i++;
	}
	return (wc);
}

char	*get_next_word(char **str, char *charset)
{
	char	*word;
	int		size;
	int		i;

	while (is_sep(**str, charset))
		(*str)++;
	size = 0;
	while ((*str)[size] && !is_sep((*str)[size], charset))
		size++;
	word = malloc(sizeof(char) * size + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < size)
	{
		word[i] = (*str)[i];
		i++;
	}
	word[i] = 0;
	*str += i;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		wc;
	int		i;

	if (!str || str[0] == 0 || !charset)
		return (NULL);
	wc = count_words(str, charset);
	strs = malloc(sizeof(char *) * (wc + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (i < wc)
	{
		strs[i] = get_next_word(&str, charset);
		if (!strs[i])
			return (NULL);
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
