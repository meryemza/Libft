/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:02:59 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/23 09:38:38 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstlast(t_list *lst)
{
    t_list *p;
    
    p = lst;
     if (!lst)
        return NULL;
    while(p -> next != NULL)
        p = p -> next;
        
    return p;
}

int main()
{
     t_list *head = NULL;
    t_list *n1 = ft_lstnew("meryem");
    t_list *n2 = ft_lstnew("wafaa");
    n1 -> next = n2;
    head = n1;
    t_list *k;
    k = ft_lstlast(head);
    printf("%s",(char *)(k -> content));
    free(n1);
    free(n2);
}