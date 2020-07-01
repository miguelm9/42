/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:39:19 by mmartin           #+#    #+#             */
/*   Updated: 2020/07/01 10:57:43 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pointy;

	i = 0;
	pointy = (unsigned char *)s;
	while (i < n)
	{
		if (c == ((char *)s)[i])
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
