/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:31:05 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/28 15:44:41 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return (32 <= uc && uc <= 126);
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("オリジナル%d\n", ft_isprint(1));
	printf("正規%d\n", isprint(1));
	printf("オリジナル%d\n", ft_isprint(126));
	printf("正規%d\n", isprint(126));
}
