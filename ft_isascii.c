/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:44:11 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/27 15:57:55 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if(0 <= c && c <= 127)
		return(1);
	return(0);
}

#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("isascii=%d\n",isascii('c'));
	printf("ft_isascii=%d\n",ft_isascii('c'));
	char c = 128;
	printf("isascii=%d\n",isascii(c));
	printf("ft_isascii=%d\n",ft_isascii(c));
}
