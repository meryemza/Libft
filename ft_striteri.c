/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:17:47 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/17 17:02:23 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
unsigned int i;
if(!s || !f)
return;
i = 0;
while(s[i])
{
f(i,&s[i]);
i++;
    
}
    
}
/*
void ft(unsigned int i,char *c)
{
    (void)i;
    if(*c >= 'a' && *c <= 'z')
    *c = *c - 32;
}
int main()
{
    char s[] = "meRyem";
    ft_striteri(s,ft);
    printf("%s",s);

}
*/