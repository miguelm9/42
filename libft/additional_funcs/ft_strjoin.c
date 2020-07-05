/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/05 18:33:14 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/05 18:41:34 by nerviosus        ###   ########.fr       */
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

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	str = (char *) malloc((6+ 7 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	while(*s1 != '\0')
	{
		*str = *s1;
		printf("Guardando %c de %s\n", *str, str);
		s1++;
		str++;
	}
	printf("La string: %s\n", str);
	while(*s2 != '\0')
	{
		*str = *s2;
		s2++;
		str++;
	}
	*str = '\0';
	return (str);

}

int main(void)
{
	printf("%s\n", ft_strjoin("hola ", "mundo!"));
	return (0);	
}