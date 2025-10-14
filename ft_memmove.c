/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:00:51 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/14 21:48:39 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h> 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;

	d = (char *)dest;
	s = (char *)src;

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
int main()
{
	char str [] = {1,2,3,4,5,6};
	int n = 2;
	char *p;
	p = (char *)ft_memmove(str + 2, str, n);
        printf("%s ", p);
	return 0;
}

*/
