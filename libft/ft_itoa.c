/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:05:06 by nerviosus         #+#    #+#             */
/*   Updated: 2020/08/11 12:24:58 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static void		ft_is_negative(int *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char			*ft_itoa(int n)
{
	long		mem;
	int			i;
	int			neg;
	char		*str;

	mem = n;
	i = 2;
	neg = 0;
	ft_is_negative(&n, &neg);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (mem /= 10)
		i++;
	i += neg;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	str[--i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
