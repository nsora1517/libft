/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:39:29 by snagasak          #+#    #+#             */
/*   Updated: 2026/05/03 00:39:38 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ud;
	unsigned char	*us;

	ud = (unsigned char *)dest;
	us = (unsigned char *)src;
	if (src < dest)
	{
		while (n--)
			ud[n] = us[n];
	}
	else
	{
		while (n--)
			*ud++ = *us++;
	}
	return (dest);
}

int	main(void)
{
	char src[] = "abcde";
	char src2[] = "abcde";
	size_t n;
	char *res;

	// char	dest[20] = "cdefg";
	n = 10;
	res = ft_memmove(src + 2, src, n);
	printf("%s\n", res);
	res = memmove(src2 + 2, src2, n);
	printf("%s\n", res);
}
