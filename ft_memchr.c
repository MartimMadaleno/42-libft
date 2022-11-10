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
	char	*arr;
	size_t	i;

	arr = (char *)str;
	i = 0;
	while (i <= n)
	{
		if (arr[i] == c)
			return (arr);
		i++;
	}
	return (0);
}
