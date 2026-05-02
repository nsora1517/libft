/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 00:38:48 by snagasak          #+#    #+#             */
/*   Updated: 2026/05/03 00:38:50 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*mal;

	if (number > SIZE_MAX / size)
		return (NULL);
	if (number == 0 || size == 0)
		return (NULL);
	mal = malloc((number * size));
	if (!mal)
		return (NULL);
	ft_bzero(mal, (number * size));
	return (mal);
}

int	main(void)
{
	size_t i;

	i = -1;
	printf("%lu\n", SIZE_MAX);
	printf("%lu\n", i);
}
