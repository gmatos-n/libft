/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:01:11 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/11/29 19:22:20 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*n;

	size = 0;
	n = lst;
	while (n)
	{
		size++;
		n = n->next;
	}
	return (size);
}

/* int main()
{
	t_list *n;
	t_list *n2;
	t_list *n3;
	char *str = "Hello World n1";
	char *str2 = "Hello World n2";
	char *str3 = "Hello World n3";

	n = ft_lstnew(str);
	n2 = ft_lstnew(str2);
	n3 = ft_lstnew(str3);
	ft_lstadd_front(&n, n2);
	ft_lstadd_front(&n, n3);
	printf("%d\n", ft_lstsize(n));
	return (0);
} */
