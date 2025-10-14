/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:59:18 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/14 16:59:20 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
size_t i;
i = 0;
char *d ;
char *s ;

d = (char *)dest;
s =(char *)src;
if(!d && !s)
return NULL;

if (d == s || n == 0)
return d;

while(i < n)
{   
    d[i] = s[i];
    i++;
}
return (d);
}
/*
int main()
{
    char *ptr = "meryem";
    char ppi[13] = "zahir";
    size_t i = 3;
    size_t j = 0;
    ft_memcpy(ppi, ptr, i);
    while(ppi[j])
{
    printf("%c",ppi[j]);
    j++;
}
return 0;

}