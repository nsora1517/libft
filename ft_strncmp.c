/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:20:47 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/28 21:40:50 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len - 1 && (s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	printf("abc vs abc (3): %d / %d\n", ft_strncmp("abc", "abc", 3),
		strncmp("abc", "abc", 3));
	printf("abc vs abd (3): %d / %d\n", ft_strncmp("abc", "abd", 3),
		strncmp("abc", "abd", 3));
	printf("abd vs abc (3): %d / %d\n", ft_strncmp("abd", "abc", 3),
		strncmp("abd", "abc", 3));
	printf("len=0: %d / %d\n", ft_strncmp("abc", "xyz", 0), strncmp("abc",
			"xyz", 0));
	printf("range outside diff: %d / %d\n", ft_strncmp("012345", "012346", 5),
		strncmp("012345", "012346", 5));
	printf("range includes diff: %d / %d\n", ft_strncmp("012345", "012346", 6),
		strncmp("012345", "012346", 6));
	printf("short vs long: %d / %d\n", ft_strncmp("abc", "abcd", 4),
		strncmp("abc", "abcd", 4));
	printf("long vs short: %d / %d\n", ft_strncmp("abcd", "abc", 4),
		strncmp("abcd", "abc", 4));
	printf("same long n: %d / %d\n", ft_strncmp("abc", "abc", 10),
		strncmp("abc", "abc", 10));
	printf("embedded null: %d / %d\n", ft_strncmp("ab\0c", "ab\0d", 4),
		strncmp("ab\0c", "ab\0d", 4));
	printf("empty-empty: %d / %d\n", ft_strncmp("", "", 5), strncmp("", "", 5));
	printf("empty-a: %d / %d\n", ft_strncmp("", "a", 1), strncmp("", "a", 1));
	printf("a-empty: %d / %d\n", ft_strncmp("a", "", 1), strncmp("a", "", 1));
	printf("unsigned: %d / %d\n", ft_strncmp("\200", "\0", 1), strncmp("\200",
			"\0", 1));
	return (0);
}
