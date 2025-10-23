/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:40:33 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/23 14:00:44 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!lst || !del)
        return;
    del(lst -> content);
    free(lst);
}

/*
 void dell(void *content)
    {
        free(content);
    }
    
int main()
{
    t_list *head = NULL; 
    t_list *k = ft_lstnew(strdup("zahir"));
    t_list *m = ft_lstnew(strdup("mer"));
 t_list *f = ft_lstnew(strdup("kawtar"));
 head = k;
   k -> next = m;
    m -> next = f;
    t_list *l = head->next;
    ft_lstdelone(head, dell);
    head = l;
    l = head;
    while (l != NULL)
    {
        printf("%s\n", (char *)l->content);
        l = l->next;
    }
    while(head)
    {
        t_list *g = head->next;
        ft_lstdelone(head, dell);
        head = g;
    }
    return 0;
}
*/



