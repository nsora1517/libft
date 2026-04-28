/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagasak <snagasak@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:41:58 by snagasak          #+#    #+#             */
/*   Updated: 2026/04/28 22:16:38 by snagasak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
 char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	i = 0;
	  if (little[0] == '\0')
        return ((char *)big);
	while(i < len && big[i] != '\0')
	{
		j = 0;
			while ((i + j) < len && big[i + j] != '\0' && little[j] != '\0' && big[i + j] == little[j])	
			{
				j++;
			}
			if(little[j] == '\0')
				return((char *)&big[i]);
		i++;
	}
	return(NULL);
}	
