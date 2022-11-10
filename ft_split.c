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
#include <stdio.h>

int wordCount(const char *s, char c)
{
	int count;

	count = 0;
	while(*s)
	{
		while(*s == c && *s)
			s++;
		if(*s)
			count++;
		while(*s != c && *s)
			s++;
	}
	
	return count;
}

int getWordLen(const char *s, char c)
{
	int count;

	count = 0;
	while(*s != c && *s)
	{
		s++;
		count++;
	}
	return count;
}

char	**ft_split(const char *s, char c)
{
	int wordsNum;
	char **words;
	int words_I;
	int i;

	wordsNum = wordCount(s, c);
	words = malloc(sizeof(char *) * (wordsNum + 1) );
	if(!words)
		return 0;
	words_I = 0;
	while(*s)
	{
		while(*s == c && *s)
			s++;
		if(*s)
			words[words_I] = malloc(sizeof(char) * (getWordLen(s, c) + 1));
		i = 0;
		while(*s != c && *s)
		{
			words[words_I][i] = *s;
			i++;
			s++;
		}
		words[words_I][i] = '\0';
		words_I++;
	}
	words[wordsNum] = '\0';
	return words;
}
