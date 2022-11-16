/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:32:09 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/28 11:32:09 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		i;
	t_u_char	*s1;
	t_u_char	*s2;

	s1 = (t_u_char *)str1;
	s2 = (t_u_char *)str2;
	i = 0;
	if (n == 0 || (!s1 && !s2) || !n)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
