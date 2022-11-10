/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:23:25 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/28 10:23:25 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*cd;
	char	*cs;

	i = 0;
	cd = dest;
	cs = (char *)src;
	while (i <= n)
	{
		cd[i] = cs[i];
		i++;
	}
	return (dest);
}
