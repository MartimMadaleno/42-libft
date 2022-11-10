/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:31:04 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/04 13:31:04 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(long n)
{
	if (n < 0)
		return (get_num_len(n * -1) + 1);
	else if (n > 9)
		return (get_num_len(n / 10) + 1);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	int		num_len;
	char	*p;
	long	newn;

	newn = n;
	num_len = get_num_len(newn);
	p = ft_calloc(sizeof(char), num_len + 1);
	if (!p)
		return (NULL);
	if (newn == 0)
		*p = '0';
	if (newn < 0)
	{
		*p = '-';
		newn *= -1;
	}
	while (newn > 0)
	{
		num_len--;
		p[num_len] = (newn % 10) + '0';
		newn /= 10;
	}
	return (p);
}
