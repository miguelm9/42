/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 16:15:30 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/04 16:17:55 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
	return (c >= 65 && c <= 90) ? c + 32 : c;
}

int main(void)
{
	for (int i = 0; i <= 128; i++)
	{
		printf("From %d to %d\n", i, tolower(i));
		printf("From %d to %d\n\n", i, ft_tolower(i));
	}
	return (0);
}