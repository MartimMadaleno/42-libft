/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:59:51 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/28 10:59:51 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	if (c == 0)
		return (s1 + ft_strlen((char const *)s1));
	while (i < n)
	{
		if (((char *)str)[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
