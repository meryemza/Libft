/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:54:36 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/14 22:53:29 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
 size_t  i;
size_t ld;
size_t ls;
ls = ft_strlen(src);
    if (!dst && size == 0)
      return (ls);
    ld = ft_strlen(dst);
    if (ld >= size)
      return (ls + size );
    i = 0;
      while( (i + ld) <  size - 1 && src[i] ) 
      {
     dst[ld + i]= src[i];
      i++;
}
    dst[ld + i] = '\0';
      return (ls + ld);
}
/*
int main()
{
    char dest[10] = "meryem";
    char *pt = "zahir";
    size_t  i;
    
   i = ft_strlcat(dest,pt,10);
    printf("%s",dest);
    printf("Valeur retournée : %zu\n", i);

}
*/