/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:05:06 by nerviosus         #+#    #+#             */
/*   Updated: 2020/08/07 17:08:11 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		len_helper(int x)
{
	if (x >= 1000000000)
		return (10);
	if (x >= 100000000)
		return (9);
	if (x >= 10000000)
		return (8);
	if (x >= 1000000)
		return (7);
	if (x >= 100000)
		return (6);
	if (x >= 10000)
		return (5);
	if (x >= 1000)
		return (4);
	if (x >= 100)
		return (3);
	if (x >= 10)
		return (2);
	return (1);
}

char	*ft_itoa(int n)
{
	int		x;
	char	*str_num;
	int		i;

	x = n;
	i = 0;
	if (n < 0)
		str_num = (char *)malloc((len_helper(x) + 2) * sizeof(char));
	str_num = (char *)malloc((len_helper(x) + 1) * sizeof(char));
	while (i < len_helper(x))
	{
		if (n < 10)
		{
			printf("%d", n);
			*str_num = (char)n;
			break ;
		}
		printf("%d", n / 10);
		*str_num = (char)n;
		str_num++;
		n = n % 10;
		i++;
	}
	return (str_num);
}
