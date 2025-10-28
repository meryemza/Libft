/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:06:20 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/28 16:49:48 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && !len)
		return (NULL);
	if (needle[0] == '\0' || needle == haystack)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*p;
	char	*pip;

  p = "meryem zahir meryem";
  pip = "zi";
  char * po;
  po = ft_strnstr(p, pip, 30);
  printf("%s",po);
}
*/

