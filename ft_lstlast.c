/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:25:41 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/11/23 20:43:20 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*n;

	n = lst;
	if (!n)
		return (NULL);
	while (n->next)
		n = n->next;
	return (n);
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
	printf("%s\n", (char *)ft_lstlast(n)->content);
	return (0);
} */
