/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:40:08 by snagasak          #+#    #+#             */
/*   Updated: 2026/05/03 00:40:10 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;

	i = 0;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (size == 0)
		return (slen);
	while ((i < size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[50] = "";
	char src[50] = "hello";
	printf("%zu\n", ft_strlcpy(dst, src, 2));
	// printf("%d\n",strlcpy("","hello",2));
}
