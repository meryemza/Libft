/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:03:33 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/17 17:30:22 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

    char *newstr;
    unsigned int len;
    unsigned int i;
    if (!s || !f)
    return (NULL);
    len = ft_strlen(s);
     newstr = malloc(sizeof(char) * (len + 1));
    if(!newstr)
    return NULL;
    i = 0;
    while(s[i] && i < len)
{
   newstr[i] = f(i,s[i]);
   i++;
}  
  newstr[i] = '\0';
return newstr;  
    
}
/*
char f(unsigned int i,char c)
{
    (void)i;
if(c >= 'a' && c <= 'm')
c = c - 32;
return c;
    
}
int main()

{
    char *s = "meryem";
    char *k;
    k = ft_strmapi(s, f);
    printf("%s",k);
    
}
*/
