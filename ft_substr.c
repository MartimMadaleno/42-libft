/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:20:17 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/31 14:20:17 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*p;
	size_t	size;

	size = ft_strlen(str);
	if (start > size)
	{
		p = ft_calloc(1, sizeof(char));
		return (p);
	}
	if (len >= size)
		len = size - start;
	p = ft_calloc((len + 1), sizeof(char));
	if (!p)
		return (NULL);
	return (ft_memcpy(p, str + start, len));
}
