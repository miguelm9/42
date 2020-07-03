/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 18:34:25 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/03 18:43:38 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int g_i;

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int t;
    unsigned int p;
    unsigned int m;
 
    g_i = -1;
    t = 0;
    p = -1;
    while (dest[++g_i] != 0)
    {
    }
    m = g_i;
    while (src[++p] != 0)
    {
    }
    while (src[t] != 0 && (g_i < size - 1) && (size != 0))
    {
        dest[g_i] = src[t];
        g_i++;
        t++;
    }
    dest[g_i] = 0;
    if (size < g_i)
        return (size + p);
    else
        return (m + p);
}
