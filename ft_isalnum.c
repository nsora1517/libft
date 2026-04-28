/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:07:50 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/25 16:53:22 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	return (0);
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
		printf("'%c' -> %d\n", test[i], isalnum(test[i]));
		i++;
	}
	printf("\nor\n");
	i = 0;
	while (test[i])
	{
		printf("'%c' -> %d\n", test[i], ft_isalnum(test[i]));
		i++;
	}
	return (0);
}
