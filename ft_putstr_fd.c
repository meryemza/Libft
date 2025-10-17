/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:31:20 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/17 11:07:51 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>   
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
    int i;
    if(!s)
    return;
    if(fd != -1)
    {
   i = 0;
   while(s[i])
   {
     write(fd,&s[i],1);
     i++;
   }
   }
}
   /*
int main()
{
    char *s =  "meryem";
    int fd = open("ecrit.text", O_WRONLY | O_CREAT  ,0644);

    if(fd == -1)
    return (perror("open"),1);
    ft_putstr_fd(s,fd);
     close(fd);

}
*/