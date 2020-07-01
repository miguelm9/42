/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 08:37:40 by mmartin           #+#    #+#             */
/*   Updated: 2020/07/01 08:54:06 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*str2;

	i = 0;
	if (str == NULL)
		return (NULL);
	str2 = str;
	while (i < len)
	{
		str2[i] = c;
		i++;
	}
	return (str);
}
