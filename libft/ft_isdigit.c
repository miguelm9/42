/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 15:32:48 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/04 15:44:14 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
	return (c < 48 || c > 57) ? (0) : (1);
}

int main(void)
{
	for (int i = 47; i <= 58; i++)
	{
		printf("GO FOR %d \n", i);
		printf("%d", isdigit(i));
		printf("\n%d\n\n", ft_isdigit(i));
	}
	return (0);
}