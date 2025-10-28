/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:35:02 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/28 12:12:17 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (nmemb * size));
	return (p);
}

// int	main(void)
// {
// 		char *ptr ;
// 		char *tr ;
// 		ptr = (char *)calloc(0, 0);
// 		tr = (char *)ft_calloc(0, 0);
// 		printf("dialhom  %p\n",ptr);
// 		printf("diali  %p",tr);
// 		if(ptr)
// 			free(ptr);
// 		if (tr)
// 			free(tr);
// }
