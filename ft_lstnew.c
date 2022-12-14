/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmendes- <mmendes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:46:28 by mmendes-          #+#    #+#             */
/*   Updated: 2022/11/09 19:46:28 by mmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*strct;

	strct = malloc(sizeof(t_list));
	if (!strct)
		return (NULL);
	strct->content = content;
	strct->next = NULL;
	return (strct);
}
