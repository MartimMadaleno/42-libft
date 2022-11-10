/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:26:07 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/28 10:26:07 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*arr;
	int		len;

	arr = (char *)str;
	len = ft_strlen(arr);
	while (*arr != c && len >= 0)
	{
		len--;
		if (len == -1)
			*arr = '\0';
		else
			*arr = *arr - 1;
	}
	return (arr);
}
