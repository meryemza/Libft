/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:00:32 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/20 17:48:21 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*

   int main()
{
    char b[] = "1337";
    char d[] = "1337";
	int c = 'a';
	ft_memset(b, c,2);
	memset(d, c,2);
	
	printf("%s\n",b);
	printf("%s",d);
}
*/
