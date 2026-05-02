/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:38:48 by snagasak          #+#    #+#             */
/*   Updated: 2026/05/03 01:13:20 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*buffer;

	if (size != 0 && number > SIZE_MAX / size)
		return (NULL);
	buffer = malloc((number * size));
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, (number * size));
	return (buffer);
}

int	main(void)
{
	size_t	i;
	size_t	n;
	int		*k;

	n = 5;
	k = ft_calloc(n, sizeof(int));
	if (!k)
	{
		printf("Allocation failed\n");
		return (1);
	}
	// 初期値確認（全部0）
	i = 0;
	while (i < n)
	{
		printf("k[%zu] = %d\n", i, k[i]);
		i++;
	}
	// 値を代入
	i = 0;
	while (i < n)
	{
		k[i] = i + 1;
		i++;
	}
	printf("\nAfter assignment:\n");
	// 再確認
	i = 0;
	while (i < n)
	{
		printf("k[%zu] = %d\n", i, k[i]);
		i++;
	}
	free(k);
	return (0);
}
