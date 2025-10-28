/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:00:51 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/26 18:47:19 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d <= s)
		return (ft_memcpy(d, s, n));
	else
	{
		while (n)
		{
			n--;
			d[n] = s[n];
		}
		return (d);
	}
}
/*

int	main(void)
{
	int str[] = {1,2,3,4,5};
	int *p;
	p = memmove(str + 2,str,9);
	int i = 0;
	while(i < 3)
	{
		printf("%d\n",p[i]);
		i++;
	}
	return (0);
}
*/
