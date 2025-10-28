/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:54:36 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/26 23:39:59 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ld;
	size_t	ls;

	ls = ft_strlen(src);
	if (!dst && size == 0)
		return (ls);
	ld = ft_strlen(dst);
	if (ld >= size)
		return (ls + size);
	i = 0;
	while ((i + ld) < size - 1 && src[i])
	{
		dst[ld + i] = src[i];
		i++;
	}
	dst[ld + i] = '\0';
	return (ls + ld);
}
/*
int	main(void)
{
	
	char	dest[] = "meryem";
	char	*pt;
	size_t	i;

	pt = "zahir";
   i = ft_strlcat(dest,pt,5);
	printf("%s\n",dest);
	printf("Valeur retournée : %zu\n", i);
}
*/