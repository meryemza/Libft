/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:00:19 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/14 22:45:44 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	i = 0;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (ft_strlen(src));
	}
}

/*
int main()
{
	char *ptr = "meryem";
	char pip[8];
	size_t I;
	
	I = ft_strlcpy(pip,ptr,3);
	printf("pip = %s\n", pip);
    printf("%zu", I);
}
	*/