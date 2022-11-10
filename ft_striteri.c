/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:08:20 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/09 19:08:20 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void func(unsigned int i, char *c)
// {
// 	*c = *c + 1;
// 	return;
// }

// #include <stdio.h>

// int main()
// {
// 	char s[5] = "Hello";
// 	ft_striteri(s, &func);
// 	printf("%s\n",s);
// }