/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 19:09:09 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/03 19:37:29 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strrchr(const char *s, int c)
{
    int             i;
    int             posicion;
    char            *str;
    unsigned char   character;

    i = 0;
    posicion = 0;
    str = (char *) s;
    character = (char) c;
    while (*str != '\0')
    {
        if (*str == character)
            posicion = i;
        str++;
        i++;
    }
    i = 0;
    str = (char *) s;
    while (i < posicion)
    {
        i++;
        str++;
    }
    return (str);
}
