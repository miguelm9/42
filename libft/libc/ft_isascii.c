/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 15:54:21 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/04 15:59:00 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
	return (c >= 0 && c<= 127) ? 1 : 0;
}

int main (void)
{
	for (int i = 0; i < 128; i++)
	{
		printf("%d: %d\n", i, __isascii(i));
		printf("%d: %d\n\n", i, ft_isascii(i));
	}
	return (0);
}