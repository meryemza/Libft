/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:06:20 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/15 14:44:03 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i;
   size_t j;
   if (!haystack && !len)
		return (NULL);
  if(needle[0] == '\0' || needle == haystack)
    return ((char *)haystack);
   i = 0;
while(haystack[i]  && i < len)
{
     j = 0;
   while(haystack[i + j] == needle[j]  && (i + j) < len)
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
int main()
{
  char *p = "meryem zahir meryem";
  char *pip = "zahir";
  char * po;
  po = ft_strnstr(p, pip, 30);
  printf("%s",po);
}
  */
 