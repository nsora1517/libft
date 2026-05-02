/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:39:43 by snagasak          #+#    #+#             */
/*   Updated: 2026/05/03 00:39:51 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*us;

	us = (unsigned char *)s;
	while (n--)
		*us++ = (unsigned char)c;
	return (s);
}

int	main(void)
{
	char s[10] = "hello";
	char *res;
	int c;

	c = 'a';
	res = ft_memset(s, c, 3);
	printf("%s\n", res);
	res = memset(s, c, 3);
	printf("%s\n", res);
}
