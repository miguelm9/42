/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:05:06 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/22 18:01:21 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int lenHelper(int x)
{
    if (x >= 1000000000) return 10;
    if (x >= 100000000)  return 9;
    if (x >= 10000000)   return 8;
    if (x >= 1000000)    return 7;
    if (x >= 100000)     return 6;
    if (x >= 10000)      return 5;
    if (x >= 1000)       return 4;
    if (x >= 100)        return 3;
    if (x >= 10)         return 2;
    return 1;
}

char *ft_itoa(int n)
{
	int x;
	char *str_num;

	x = n;
	if(n < 0)
		str_num = (char *) malloc((lenHelper(x)+2)*sizeof(char));
	str_num = (char *) malloc((lenHelper(x)+1)*sizeof(char));
	// if (n < 10)
	// 	printf("%d", n);
	// while (n >= 10)
	// {
	// 	printf("%d", n/10);
	// 	n = n%10;
	// 	ft_itoa(n);	
	// }

	for (int i = 0; i < lenHelper(x); i++)
	{
		if (n < 10)
		{
			printf("%d", n);
			*str_num = (char) n;
			break;
		}
		printf("%d", n/10);
		*str_num = (char) n;
		str_num++;
		n = n%10;
	}
	return (str_num);
}

int main(void)
{
	printf("%s\n", ft_itoa(239));
	return (0);
}