/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:48:09 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/25 15:59:09 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	fin;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	fin = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_check(set, s1[start]))
		start++;
	while (s1[fin] && fin > start && ft_check(set, s1[fin]))
		fin--;
	if (start > fin)
		return (ft_strdup(""));
	trim = malloc(fin - start + 2);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + start, fin - start + 2);
	return (trim);
}
/*
int	main(void)
{
	char	*str;
	char	*set;
	char	*p;

	str = "meryem";
	set = "em";
p =ft_strtrim(str,set);
printf("%s",p);
}
*/