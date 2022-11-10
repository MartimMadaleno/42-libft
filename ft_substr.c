/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:20:17 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/31 14:20:17 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *str, unsigned int start, size_t len)
{
	size_t substr_len;
	char *p;
	
	substr_len = len - start + 1;
	p = malloc(substr_len * sizeof(char));
	ft_strlcpy(p, &str[start], substr_len);
	return p;
}
