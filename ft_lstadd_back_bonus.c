/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:42:02 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/28 16:32:39 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	p = *lst;
	while (p->next != NULL)
		p = p->next;
	p->next = new;
}
/*
int main(void)
{
	t_list *head;
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *p;

	head = NULL;
	n1 = ft_lstnew("mery");
	n2 = ft_lstnew("zahir");
	n3 = ft_lstnew("zahiraa");
	head = n1;
	n1->next = n2;
	ft_lstadd_back(&head, n3);
	p = head;
	while (p)
	{
		printf("%s\n", (char *)p->content);
		p = p->next;
	}
}
*/
