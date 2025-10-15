/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:45:11 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/15 15:37:36 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int i;
    int s;
    unsigned long	n;

    i = 0;
    s = 1;
    n = 0;
   while((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
       i++;
    if(nptr[i] == '+')
    i++;
    else if(nptr[i] == '-')
            s = -1 ;
   while(nptr[i] >= '0' && nptr[i] <= '9')
   {
       n = n * 10 + (nptr[i] - '0');
       i++;
   }
   return( n * s);
}
/*
int main()
{
    char *nptr = "    -12356MERYEM";
    int k;
    k = ft_atoi(nptr);
    printf("%d",k);
}
*/