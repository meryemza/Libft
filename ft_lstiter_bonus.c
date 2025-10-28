/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:21:50 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/23 22:58:12 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	f(void *content)
{
if(content)
printf("%d\n",*(int *)content);
}

int	main(void)
{
	t_list	*head;
	int		a;
	int		b;
	t_list	*n1;
	t_list	*n2;

	head = NULL;
	a = 65;
	b = 76;
	n1 = ft_lstnew(&a);
	n2 = ft_lstnew(&b);
	head = n1;
	n1 -> next = n2;
	ft_lstiter(head,f);
}
*/