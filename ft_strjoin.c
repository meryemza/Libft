/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:58:10 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/16 12:44:12 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
   char *join;
    size_t  len1;
    size_t  len2;
   if(!s1 && !s2)
       return NULL;
    else if(!s1)
        return ft_strdup(s2);
    else if(!s2)
        return ft_strdup(s1);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
   join = malloc(len1 + len2 + 1);
   if(!join)
       return NULL;
    ft_memcpy(join, s1, len1);
    ft_memcpy(join + len1, s2, len2);
            join[len1 + len2] = '\0';
          return (join);
}
/*
int main()
{
    char *s1 = "meryem";
    char *s2 = "";
    char *j = ft_strjoin(s1, s2);
    printf("%s",j);
    free(j);
}
*/