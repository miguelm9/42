/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 16:23:47 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/04 22:25:47 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *str;
	int len;

	len = 0;

	if (!s)
		return (NULL);
	while (s[len] != '\0')
		len++;
	str = (char*) malloc(sizeof(char)*(len+1));
	if (!str)
		return (NULL);
	len = 0;
	while(s[len] != '\0')
	{
		str[len] = s[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}

int main(void)
{
	char str[47] = "NO PUEDE SER QUE ESTO SEA ASI QUE COJONES PASA";
	printf("%s\n", ft_strdup(str));
	free(ft_strdup(str));
	return (0);
}