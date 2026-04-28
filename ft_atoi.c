/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 01:51:15 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/25 13:07:30 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nbr)
{
	int	i;
	int	m;
	int	ans;

	i = 0;
	m = 0;
	ans = 0;
	while (nbr[i] == 32 || (9 <= nbr[i] && nbr[i] <= 13))
		i++;
	if (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			m = 1;
		i++;
	}
	while ('0' <= nbr[i] && nbr[i] <= '9')
	{
		ans = (ans * 10) + (nbr[i] - '0');
		i++;
	}
	if (m == 1)
		ans = ans * -1;
	return (ans);
}
#include <stdio.h>

int	main(void)
{
	char	nbr[] = "   -124356as3";

	printf("%d\n", ft_atoi(nbr));
	return (0);
}
