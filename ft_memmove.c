/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:25:09 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/28 10:25:09 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int		i;
	char	*cd;
	char	*cs;

	i = 0;
	cd = str1;
	cs = (char *)str2;
	while (i <= n)
	{
		cd[i] = cs[i];
		i++;
	}
	return (str1);
}
