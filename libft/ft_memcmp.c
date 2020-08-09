/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:59:20 by mmartin           #+#    #+#             */
/*   Updated: 2020/08/10 01:02:49 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	while (n--)
	{
		if (*(t_byte *)(s1) != *(t_byte *)(s2))
			return (*(t_byte *)(s1) - *(t_byte *)(s2));
		s1++;
		s2++;
	}
	return (0);
}
