/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 23:18:38 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/29 02:16:55 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;
	i = 0;
	while(s[i] != '\0')
		i++;
	while(i >= 0)
	{
		if((unsigned char)s[i] == (unsigned char)c)
			return((char *)&s[i]);
		i--;
	}
	return(0);
}


#include<stdio.h>
#include <string.h>
int main()
{
	char *self;
	char *real;

	self = ft_strrchr("HeHello", -1);
	real = strrchr("HeHello", -1);	
	printf("%s\n",self);
	printf("%s\n",real);
	return 0;
}
