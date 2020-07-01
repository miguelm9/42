/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 09:30:50 by mmartin           #+#    #+#             */
/*   Updated: 2020/07/01 09:44:14 by mmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memcpy.c"

//void	*ft_memmove(void *dst, const void *src, size_t len);

int main()
{
	char csrc[100] = "Geeksfor";
	char csrc1[100] = "Geeksfor";
	char csrc2[100] = "Geeksfor";

	printf("\n----\n");
	memcpy(csrc + 5, csrc, strlen(csrc) + 1);
	printf("%s", csrc);
	printf("\n----\n");

	ft_memcpy(csrc1 + 5, csrc1, strlen(csrc1) + 1);
	printf("%s", csrc1);
	printf("\n----\n");

	memmove(csrc2 + 5, csrc2, strlen(csrc2) + 1);
	printf("%s", csrc2);
	printf("\n----\n");
	return (0);
}
// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	size_t	i;

// 	i = 0;

