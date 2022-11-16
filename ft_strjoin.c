/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:22:31 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/01 14:22:31 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*p;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	p = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		p[s1_len + i] = s2[i];
		i++;
	}
	p[s1_len + s2_len] = '\0';
	return (p);
}
