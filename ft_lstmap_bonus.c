/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 22:52:33 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/24 13:58:20 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

/*
void	del(void *content)
{
   free(content);
}

void	*f(void *content)
{
	char	*p;
	char	*ptr;
	int		i;

	p = (char*)content;
	ptr = malloc(ft_strlen(p) + 1);
	if(!ptr)
		return (NULL);
	strcpy(ptr,p);
	i = 0;
	while( ptr[i])
	{
		if(ptr[i] >= 'A' && ptr[i] <= 'Z')
		ptr[i] = ptr[i] + 32;
		i++;
	}
		return (ptr);
}
int	main(void)

{  t_list *new;
	t_list *head;
	head = NULL;
	t_list *lst1 = ft_lstnew("MERYEM");
	t_list *lst2 =ft_lstnew("Zahir");
	t_list *lst3 = ft_lstnew("cHAYmae");
	head = lst1;
	lst1 -> next = lst2;
   ft_lstadd_back(&head,lst3);
	new = ft_lstmap(head,f,del);
	t_list *k = new;
	while(k)
	{

		printf("%s\n",(char *)k->content);
		k = k ->next;
	}
	ft_lstclear(&new, del);

}
*/