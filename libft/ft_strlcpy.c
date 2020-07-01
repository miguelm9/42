/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 17:13:40 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/01 17:26:21 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
 
    j = 0;
    while (src[j] != '\0')
    {
        j++;
    }
    if (size != 0)
    {
        i = 0;
        while (i < (size - 1) && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (j);
}

int main(void)
{
    char *str1[] = "Hello";
    char *str2[] = "sir";

    char *str3[] = "Hello";
    char *str4[] = "sir";
    printf("%d\n", strlcpy)

    return (0);
}
