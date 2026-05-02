/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:39:19 by snagasak          #+#    #+#             */
/*   Updated: 2026/05/03 00:39:21 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ud;
	unsigned char	*us;

	ud = (unsigned char *)dest;
	us = (unsigned char *)src;
	while (n--)
		*ud++ = *us++;
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[50];
	char src[] = "hello";
	char *res;

	res = ft_memcpy(dest, src, 4);
	printf("%s\n", res);
	res = memcpy(dest, src, 4);
	printf("%s\n", res);
}
