/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 19:03:58 by nerviosus         #+#    #+#             */
/*   Updated: 2020/08/09 00:32:23 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	//int		posiciones[ft_strlen(set)];

	i = 0;
	str = (char *)malloc(sizeof(str) * (ft_strlen(s1) - ft_strlen(set) + 1));
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
		str[i++] = *s1++;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	return NULL;
}
