/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:58:29 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/28 21:37:14 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
			return((char *)&s[i]);
		i++;
	}
	if (c == '\0')
    return ((char *)&s[i]);
else
    return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = "hello";
	char b[] = "";

	printf("オリジナル%s\n",ft_strchr(a,'e'));
	printf("本家=%s\n",strchr(a,'e'));
	printf("オリジナル=%s\n",ft_strchr(b,'a'));
	printf("本家=%s\n",strchr(b,'a'));
}

