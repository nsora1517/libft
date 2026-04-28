/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:07:50 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/28 15:39:06 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return ((uc >= '0' && uc <= '9') || (uc >= 'A' && uc <= 'Z') || (uc >= 'a'
			&& uc <= 'z'));
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
