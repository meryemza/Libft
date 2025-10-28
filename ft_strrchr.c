/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 23:22:48 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/25 13:49:31 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == (char)c)
			return ((char *)(s + n));
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char * ptr = "meryem";
	char *p ;
	p = ft_strrchr(ptr,69);
	printf("%s" ,p);
}
	*/