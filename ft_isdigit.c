/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:14:10 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/28 15:36:14 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	return ('0' <= uc && uc <= '9');
}

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("オリジナル%d\n", ft_isdigit(1));
	printf("正規%d\n", isdigit(1));
	printf("オリジナル%d\n", ft_isdigit('1'));
	printf("正規%d\n", isdigit('1'));
}
