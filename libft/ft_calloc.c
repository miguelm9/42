/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerviosus <nerviosus@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 22:22:18 by nerviosus         #+#    #+#             */
/*   Updated: 2020/07/04 22:50:27 by nerviosus        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_bzero.c"


void *ft_calloc(size_t elements, size_t size)
{
	void *ptr;

	ptr = malloc(elements * size);
	
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, elements * size);
	return (ptr);
}

int main(void)
{

}