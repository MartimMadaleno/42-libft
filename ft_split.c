/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:46:02 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/04 12:46:02 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static int	get_word_len(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s != c && *s)
	{
		s++;
		count++;
	}
	return (count);
}

static int	pass_s(const char *s, char c, char **words, int words_i)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		words[words_i][i] = *s;
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	int		words_i;
	int		words_num;

	words_num = word_count(s, c);
	words = ft_calloc((words_num + 1), sizeof(char *));
	if (!words)
		return (NULL);
	words_i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			words[words_i] = ft_calloc((get_word_len(s, c) + 1), sizeof(char));
			if (!words[words_i])
				return (0);
		}
		s += pass_s(s, c, words, words_i);
		words_i++;
	}
	words[words_i] = NULL;
	return (words);
}
