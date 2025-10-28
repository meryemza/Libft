/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:46:24 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/26 19:00:33 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		count;

	p = lst;
	count = 0;
	if (!lst)
		return (0);
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}

/*
int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	int		k;

	head = NULL;
	n1 = ft_lstnew("meryem");
	n2 = ft_lstnew("wafaa");
	n1 -> next = n2;
	head = n1;
	k = ft_lstsize(head);
	printf("%d",k);
	free(n1);
	free(n2);
}
*/