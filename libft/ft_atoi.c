/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 21:29:03 by nerviosus         #+#    #+#             */
/*   Updated: 2020/08/07 14:20:53 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int x;
	int is_neg;

	is_neg = 0;
	x = 0;
	while (*nptr == '\f' || *nptr == '\n' || *nptr == '\r'
	|| *nptr == '\t' || *nptr == '\v' || *nptr == ' ')
		++nptr;
	if (*nptr == '-')
	{
		is_neg = 1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		x = x * 10 + (*nptr - 48);
		++nptr;
	}
	return (is_neg ? (-x) : x);
}
