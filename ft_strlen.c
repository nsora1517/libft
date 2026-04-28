/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 01:44:19 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/25 21:10:05 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[] = "hello";

	printf("%d\n", ft_strlen(c));
	printf("%lu\n", strlen(c));
	return (0);
}
