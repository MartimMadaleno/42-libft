/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 08:05:29 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/30 08:05:29 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	tmp;

	if (!*to_find)
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == to_find[0])
		{
			tmp = 0;
			while (str[i + tmp] == to_find[tmp] && i + tmp < n)
			{
				if (to_find[tmp + 1] == '\0')
					return ((char *)(str + i));
				tmp++;
			}
		}
		i++;
	}
	return (0);
}
