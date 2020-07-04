/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 15:44:28 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/04 15:49:46 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	if ((c >= 48 && c<=57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int main(void)
{
	//mayusculas
	for (int i = 96; i <= 123; i++)
	{
		printf("GO FOR %d \n", i);
		printf("%d", isalnum(i));
		printf("\n%d\n\n", ft_isalnum(i));
	}
	return (0);
}