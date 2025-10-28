/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:24:54 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/25 13:54:30 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_len_num(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	long	nb;
	char	*p;

	count = ft_len_num(n);
	p = malloc(count + 1);
	if (!p)
		return (NULL);
	nb = n;
	p[count] = '\0';
	if (nb == 0)
		p[0] = '0';
	if (nb < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		p[--count] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (p);
}

/*
int	main(void)
{
	char	*str;

	int num = 2147483648;  
	str = ft_itoa(num);
	if (str == NULL)
		printf("Memory allocation failed\n");
	else
		printf("%s\n", str);
return (0);
}
*/
