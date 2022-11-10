/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:25:38 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/28 10:25:38 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	deslen;
	size_t	srclen;
	size_t	i;

	deslen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= deslen)
		return (size + srclen);
	else
	{
		i = 0;
		while ((i + 1 < (size - deslen)) && (src[i] != '\0'))
		{
			dest[deslen + i] = src[i];
			i++;
		}
		dest[deslen + i] = '\0';
	}
	return (deslen + srclen);
}
