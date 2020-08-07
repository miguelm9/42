/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 22:22:18 by nerviosus         #+#    #+#             */
/*   Updated: 2020/08/07 14:29:56 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

void	*ft_calloc(size_t elements, size_t size)
{
	void *ptr;

	ptr = malloc(elements * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, elements * size);
	return (ptr);
}
