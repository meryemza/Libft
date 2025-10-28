/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:00:32 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/28 12:10:45 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

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
	int	d[] = {1,3,37};
	ft_memset(d, 255,4);
	ft_memset(d, 240,1);
	int i = 0;
 while(i < 3)
 {
	printf("%d",d[i]);
	printf("\n");
	i++;
 }
	
}
*/
