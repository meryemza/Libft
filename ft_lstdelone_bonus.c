/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:40:33 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/28 16:52:54 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
 void dell(void *content)
	{
		free(content);
	}

int	main(void)
{
	t_list	*head;
	t_list	*k;
	t_list	*m;
	t_list	*f;
	t_list	*l;
	t_list	*g;

	head = NULL;
	k = ft_lstnew(strdup("zahir"));
	m = ft_lstnew(strdup("mer"));
 	f = ft_lstnew(strdup("kawtar"));
 	head = k;
   k -> next = m;
	m -> next = f;
	l = head->next;
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
		g = head->next;
		ft_lstdelone(head, dell);
		head = g;
	}
	return (0);
}
*/
