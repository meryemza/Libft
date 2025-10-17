/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:08:20 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/17 11:17:30 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putendl_fd(char *s, int fd){
if(!s)
return ;
if(fd != -1)
{
ft_putstr_fd(s,fd);    
write(fd, "\n", 1);

}
}


