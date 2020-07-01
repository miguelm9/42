/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:59:20 by mmartin           #+#    #+#             */
/*   Updated: 2020/07/01 11:09:22 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
	printf("%d\n", memcmp("a", "", 4));
	printf("%d\n", ft_memcmp("a", "", 4));
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
		{
			if (((char *)s1)[i] < ((char *)s2)[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
