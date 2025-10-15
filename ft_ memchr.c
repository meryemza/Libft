/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:46:18 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/15 11:26:29 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    while(i < n)
    {
        if(((unsigned char *)s)[i] == (unsigned char)c)
        	
            return ((void *)(s + i));
        i++;
    }
    return NULL;
}
/*
int main(void)
{
    unsigned char p[] = {1, 2, 4, 5};
    unsigned char *n;

    n = ft_memchr(p, 2, 4); 

        printf("Trouvé : %d\n", *n); 

    return 0;
}
*/
