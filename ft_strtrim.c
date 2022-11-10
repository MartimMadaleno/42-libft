/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:07:34 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/02 11:07:34 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int getToRm(const char *s1, const char *set)
{
	int count;

	count = 0;
	while(*s1)
	{
		if((*ft_strchr(set, *s1)))
			count++;
		s1++;
	}
	return count;
}

char *ft_strtrim(const char *s1, const char *set)
{
	size_t newLen;
	char *p;
	int i;

	newLen = ft_strlen(s1) - getToRm(s1, set) + 1;
	printf("%i\n", newLen);
	p = malloc(sizeof(char) * newLen);
	if(!p)
		return 0;
	i = 0;
	while(*s1)
	{
		printf("%c\n", *s1);
		if(!(*ft_strchr(set, *s1))){
			printf("IN\n", *s1);
			p[i] = *s1;
			i++;
		}
		s1++;
	}
	p[newLen - 1] = '\0';
	return p;
}
