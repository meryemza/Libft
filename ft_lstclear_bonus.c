/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:08:23 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/23 14:18:23 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if(!lst || !del)
        return;
    t_list *p ;
    while(*lst != NULL)
    {
        p = (*lst) -> next;
        ft_lstdelone(*lst,del);
         *lst = p;
    }
    *lst = NULL;
    
}

/*
void dell(void *content)
    {
        free(content);
    }

int main()
{
     t_list *head;
    head = NULL; 
    t_list *k = ft_lstnew(strdup("zahir"));
     t_list *m = ft_lstnew(strdup("meryem"));
    head = k;
    k -> next = m;
    ft_lstclear(&head,dell);
}
*/