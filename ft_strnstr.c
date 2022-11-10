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

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	int		tmp;
	char	*str;
	char	*to_find;

	str = (char *)haystack;
	to_find = (char *)needle;
	if (*to_find == '\0')
		return (str);
	i = 0;
	tmp = 0;
	while (*str && i < n)
	{
		tmp = 0;
		while (str[tmp] == to_find[tmp])
		{
			if (!to_find[tmp])
				return (str);
			tmp++;
		}
		str++;
		i++;
	}
	return (0);
}
