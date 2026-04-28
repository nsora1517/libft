/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:44:38 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/25 18:15:24 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	test[] = {'a', 'Z', '5', '#', ' ', '\0'};
	int		i;

	i = 0;
	while (test[i])
	{
		printf("'%c' -> %d\n", test[i], isalpha(test[i]));
		i++;
	}
	printf("\nor\n");
	i = 0;
	while (test[i])
	{
		printf("'%c' -> %d\n", test[i], ft_isalpha(test[i]));
		i++;
	}
	return (0);
}

