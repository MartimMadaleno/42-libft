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

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*cs;
	char		*cd;

	cs = (char *)src;
	cd = dst;
	if (cs < cd)
	{
		while (n--)
			cd[n] = cs[n];
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
