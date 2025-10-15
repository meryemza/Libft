/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:36:31 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/15 12:00:22 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
     size_t i;
     i = 0;
     if (n == 0)
     return 0;

     while(i < n && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] )
            i++;

     return ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];       
}
/*
int main()
{
    unsigned char p[] = {1, 2, 3, 4, 5};
unsigned char p2[] = {1, 33, 4, 5};
     int k;
   k =ft_memcmp(p,p2,2);
   printf ("%d",k);
    
}
   */