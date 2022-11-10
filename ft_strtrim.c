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

int	get_to_rm(const char *s1, const char *set)
{
	int	count;

	count = 0;
	while (*s1)
	{
		if ((*ft_strchr(set, *s1)))
			count++;
		s1++;
	}
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	new_len;
	char	*p;
	int		i;

	new_len = ft_strlen(s1) - get_to_rm(s1, set) + 1;
	p = malloc(sizeof(char) * new_len);
	if (!p)
		return (NULL);
	i = 0;
	while (*s1)
	{
		if (!(*ft_strchr(set, *s1)))
		{
			p[i] = *s1;
			i++;
		}
		s1++;
	}
	p[new_len - 1] = '\0';
	return (p);
}
