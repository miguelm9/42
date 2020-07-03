/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 18:44:16 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/03 19:32:00 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	char	*str;
	unsigned char	character;

	str = (char *)s;
	character = (unsigned char)c;
    while (*str != '\0')
    {
        if (*str == character)
            return (str);
        str++;
    }
    return (NULL);
}
