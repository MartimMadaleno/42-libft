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

int	getNumLen(int n)
{
	if(n == INT_MIN)
		return (getNumLen(147483648) + 2);
	else if(n < 0)
		return (getNumLen(n * -1) + 1);
	else if(n > 9)
		return (getNumLen(n / 10) + 1);
	else
		return (1);
}

char	*ft_itoa(int n)
{
	int numLen;
	char *p;

	numLen = getNumLen(n);
	if (!(p = calloc(sizeof(char), numLen + 1)))
		return (0);
	if(n == 0)
		*p = '0';
	if(n == INT_MIN)
	{
		*p = '-';
		p[numLen -= 1] = '8';
		n = 214748364;
	}
	if (n < 0)
	{
		*p = '-';
		n *= -1;
	}
	while (n > 0)
	{
		numLen--;
		p[numLen] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}
