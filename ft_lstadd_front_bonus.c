/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:17:57 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/28 14:59:04 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	head = NULL;
	n1 = ft_lstnew("meryem");
	n2 = ft_lstnew("wafaa");
	n3 = ft_lstnew("CHAYMAE");
	n1 -> next = n2;
	head = n1;
	ft_lstadd_front(&head,n3);
	if(head != NULL)
	printf("%s",(char *)((head) -> content));
}
*/