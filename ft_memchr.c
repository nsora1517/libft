/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 20:09:42 by snagasak          #+#    #+#             */
/*   Updated: 2026/05/01 20:31:13 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t i;
	const unsigned char *ub;
	i = 0;
	ub = (const unsigned char *)b;
	while(i < len)
	{
		if(ub[i] == (unsigned char)c)
		return(&ub[i]);
		i++;
	}
	return(NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
char str[] = "Hello, world!";
char *res;
res = ft_memchr(str, 'o', sizeof(str));
if (res)
    printf("Found: %c at position %ld\n", *res, res - str);
else
    printf("Not found\n");

return 0;

}
