/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:56:56 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/16 12:42:40 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
char *dup;
size_t len;
size_t  i;
i = 0;
len = ft_strlen(s);
dup = (char *)malloc(len + 1);
if( dup == NULL)   
return NULL;
while(i < len)
{
dup[i] = s[i];
i++;
}
dup[i] = '\0';
return dup;
}
/*
int main()
{
    char *ptr = "meryem";
    char *m;
    m = strdup(ptr);
    printf("%s",m);
    free(m)
    return 0;
}
*/
