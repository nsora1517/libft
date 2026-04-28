/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:46:47 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/28 16:02:32 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	or_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strdup(const char *str)
{
	char	*range;
	int		i;
	int		len;

	i = 0;
	len = or_strlen(str);
	range = malloc(sizeof(char) * len + 1);
	if (!range)
		return (NULL);
	while (str[i] != '\0')
	{
		range[i] = str[i];
		i++;
	}
	range[i] = '\0';
	return (range);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c[] = "0123456789";
	char	*s1;
	char	*s2;

	s1 = ft_strdup(c);
	s2 = strdup(c);
	printf("%s\n", s1);
	printf("%s\n", s2);
	free(s1);
	free(s2);
	return (0);
}
