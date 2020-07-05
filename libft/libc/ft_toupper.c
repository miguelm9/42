/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 16:09:42 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/04 16:15:17 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c)
{
	return (c >= 97 && c <= 122) ? c - 32 : c;
}

int main(void)
{
	for (int i = 0; i <= 128; i++)
	{
		printf("From %d to %d\n", i, toupper(i));
		printf("From %d to %d\n\n", i, ft_toupper(i));
	}
	return (0);
}