/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:25:16 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/28 10:25:16 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	int		i;
	char	*cc;

	i = 0;
	cc = dest;
	while (i <= n)
	{
		cc[i] = c;
		i++;
	}
	return (cc);
}
