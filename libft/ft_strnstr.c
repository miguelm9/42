/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 19:37:58 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/03 20:21:51 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    i++;
    return (i);
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


char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len2;

	if (*s2 == '\0')
		return ((char *)s1);
	len2 = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= len2)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
int main(void)
{
	printf("%s\n", ft_strnstr("Holacaracola", "cara", 13));
	return (0);
}