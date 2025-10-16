/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:05:55 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/16 11:54:34 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,size_t len){
    
    char *sub;
    size_t i;
    size_t s_len;
    if(!s)
        return NULL;
    s_len = ft_strlen(s);
    if(start >= s_len)
    {
        sub = malloc(1);
        if(!sub)
         return NULL;
        sub[0] = '\0';
        return (sub);
    }
    if(len > s_len - start) 
		len = s_len - start;
    sub =  (char *)malloc(len + 1);
    if(!sub)
    return NULL;
    i = 0;
    while(s[start] && i < len) 
{
    sub[i] = s[start];
    i++;
    start++;
}    
sub[i] = '\0';
return (sub);
}
/*
int main()
{
    char p[] = {'m','e','r','y','e','m','\0'};
    char * pi ;
    pi = ft_substr(p,8,10);
    printf("%s",pi);
}
*/
