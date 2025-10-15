/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:35:02 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/15 18:34:53 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *p;
    if (nmemb != 0 && size  > SIZE_MAX / nmemb)
    return (NULL);
  if (nmemb == 0 || size == 0)
  {
		p = malloc (1);
		ft_bzero(p, 1);
		return (p);
	}
p = malloc(nmemb * size);
if (!p)
		return (NULL);
  ft_bzero(p,(nmemb * size));
    return (p);
}
/*
int main()
{
     char *ptr ;
     ptr = (char *) ft_calloc(5, sizeof(int));
     printf("%p",ptr);
     
}
*/