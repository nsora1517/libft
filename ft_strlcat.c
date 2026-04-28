/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 02:23:05 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/29 03:47:14 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
 size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t slen;
	size_t dlen;
	size_t i;
	slen = 0;
	dlen = 0;
	i = 0;
	while(src[slen] != '\0')
		slen++;
	while(dlen < size && dst[dlen] != '\0')
		dlen++;
	if(dlen >= size)
	return(size + slen);
	while(src[i] != '\0' && (dlen + i + 1 < size))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return(dlen + slen);
}


#include <stdio.h>

int main(void)
{
    char dst[20] = "Hello";
    char src[] = "World";
    printf("ft_strlcat=%zu\n",ft_strlcat(dst,src,0));

    return 0;
}
