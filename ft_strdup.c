/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:53:19 by mmendes-          #+#    #+#             */
/*   Updated: 2022/10/30 19:53:19 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char *str;
	int len;
	char *p;

	str = (char *)string;
	len = ft_strlen(str);
	p = malloc((len + 1) * sizeof(char));
	ft_strlcpy(p, str, len+1);
	return p;
}
