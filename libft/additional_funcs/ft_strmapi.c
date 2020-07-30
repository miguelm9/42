/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 18:05:31 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/30 18:21:40 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int i;

	str = (char *) malloc(ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}

	str[i] = '\0';
	return (str);	
}

int main(void)
{


	return (0);
}