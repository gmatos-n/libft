/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmatos-n <gmatos-n@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:38:22 by gmatos-n          #+#    #+#             */
/*   Updated: 2023/10/23 18:57:18 by gmatos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *n)
{
	n->next = *lst;
	*lst = n;
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
	printf("%s\n", (char *)n->content);
	printf("%s\n", (char *)n->next->content);
	printf("%s\n", (char *)n->next->next->content);
	return (0);
} */
