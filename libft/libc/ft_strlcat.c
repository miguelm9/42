/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 18:34:25 by nerviosus         #+#    #+#             */
/*   Updated: 2020/08/07 15:33:49 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int t;
    unsigned int p;
    unsigned int m;
    unsigned int i;
   
    i = -1;
    t = 0;
    p = -1;

    while (dest[++i] != 0)
    {
    }
    m = i;
    while (src[++p] != 0)
    {
    }
    while (src[t] != 0 && (i < size - 1) && (size != 0))
    {
        dest[i] = src[t];
        i++;
        t++;
    }
    dest[i] = 0;
    if (size < i)
        return (size + p);
    else
        return (m + p);
}
