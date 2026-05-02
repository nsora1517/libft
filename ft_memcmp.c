/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 22:08:44 by snagasak          #+#    #+#             */
/*   Updated: 2026/05/03 00:39:08 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t				i;
	const unsigned char	*ub1;
	const unsigned char	*ub2;

	i = 0;
	ub1 = (const unsigned char *)b1;
	ub2 = (const unsigned char *)b2;
	while (i < len)
	{
		if (ub1[i] != ub2[i])
			return (ub1[i] - ub2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	b1[] = "Hello, world!";
	char	b2[] = "Hello, worlD!";

	printf("%d\n", ft_memcmp(b1, b2, 50));
	return (0);
}
